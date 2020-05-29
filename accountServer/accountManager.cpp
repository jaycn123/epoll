#include "../lib/ConnectionManager.h"
#include "../protoFiles/test.pb.h"
#include "../lib/serviceBase.h"
#include "../lib/type_define.h"
#include "AccountManager.h"
#include "../lib/Log.h"
#include "../protoFiles/msgId.pb.h"
#include "../protoFiles/player.pb.h"

AccountManager::AccountManager(void)
{
	
}

AccountManager::~AccountManager(void)
{

}

AccountManager* AccountManager::GetInstancePtr()
{
	static AccountManager cGameService;
	return &cGameService;
}

bool AccountManager::Init(MysqlControl* pMysql)
{
	if (pMysql == nullptr)
	{
		return false;
	}

	m_pMysql = pMysql;

	InitlAccount();

	return true;
}

void AccountManager::Uninit()
{

}


void AccountManager::InitMsg()
{
	ServiceBase::GetInstancePtr()->RegisterMsg(MessageID::MSGID_REGISTERACCOUNT_REQ, std::bind(&AccountManager::OnCreateAccount, this, std::placeholders::_1));
	ServiceBase::GetInstancePtr()->RegisterMsg(MessageID::MSGID_LOGINACCOUNT_REQ, std::bind(&AccountManager::OnLoginAccount, this, std::placeholders::_1));
}

void AccountManager::OnSecondTimer()
{

}

void AccountManager::OnLoginAccount(CNetPacket* pNetPacket)
{
	Msg_LoginAccount_Req Req;
	Req.ParsePartialFromArray(pNetPacket->m_pData, pNetPacket->m_len);

	Msg_LoginAccount_Ack Ack;
	Ack.set_returncode(ErrorID::Succeed);

	do 
	{
		auto it = m_accountMap.find(Req.username());
		if (it == m_accountMap.end())
		{
			Ack.set_returncode(ErrorID::UserNotFound);
			break;
		}

		if (it->second->password != Req.password())
		{
			Ack.set_returncode(ErrorID::PasswordError);
			break;
		}

	} while (false);

	ServiceBase::GetInstancePtr()->SendMsgProtoBuf(pNetPacket,MessageID::MSGID_LOGINACCOUNT_ACK, Ack);


	return;
}

void AccountManager::OnCreateAccount(CNetPacket* pNetPacket)
{
	Msg_RegisterAccount_Req Req;
	Req.ParsePartialFromArray(pNetPacket->m_pData, pNetPacket->m_len);

	Msg_RegisterAccount_Ack Ack;
	Ack.set_returncode(ErrorID::Succeed);

	do 
	{
		auto it = m_accountMap.find(Req.username());
		if (it != m_accountMap.end())
		{
			Ack.set_returncode(ErrorID::UserRepetition);
			break;
		}

		DB_Account* pAccount = new DB_Account();
		pAccount->ctype = CT_Add;
		pAccount->id = ++m_MaxAccountId;
		pAccount->user = Req.username();
		pAccount->password = Req.password();
		pAccount->Save();
		m_accountMap[pAccount->user] = pAccount;

	} while (false);

	ServiceBase::GetInstancePtr()->SendMsgProtoBuf(pNetPacket, MessageID::MSGID_REGISTERACCOUNT_ACK, Ack);
}

bool AccountManager::InitlAccount()
{
	std::string sql = "select * from account;";
	if (m_pMysql->QueryAndStore(sql) == -1)
	{
		return false;
	}

	DoubleDArray<Field> arr;
	m_pMysql->GetAllResult(arr);
	std::map<std::string, int> fieldMap = m_pMysql->GetField();
	for (size_t i = 0; i < arr.GetRowCount(); i++)
	{
		DB_Account* pAccount = new DB_Account();
		pAccount->ctype = CT_NoChange;
		pAccount->id = arr.GetValue(i, fieldMap["id"]).GetInt32();
		pAccount->user = arr.GetValue(i, fieldMap["user"]).GetString();
		pAccount->password = arr.GetValue(i, fieldMap["password"]).GetString();
		m_accountMap[pAccount->user] = pAccount;

		if (pAccount->id > m_MaxAccountId)
		{
			m_MaxAccountId = pAccount->id;
		}
	}

	return true;
}

DB_Account* AccountManager::AddAccount(int32_t id, std::string& user, std::string& password)
{
	std::string sql = "select * from account where user = '" + user + "';";
	int32_t c_result = m_pMysql->QueryAndStore(sql);
	if (c_result != 0)
	{
		return nullptr;
	}

	DB_Account* pAccount = new DB_Account();
	pAccount->ctype = CT_Add;
	pAccount->id = id;
	pAccount->user = user;
	pAccount->password = password;
	pAccount->Save();
	m_accountMap[pAccount->user] = pAccount;

	return pAccount;
}

