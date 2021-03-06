﻿#ifndef _CONNECTION_H_
#define _CONNECTION_H_

#include "type_define.h"
#include "netpack.h"
#include "memoryPool.h"

#include <functional>


#define  NET_MSG_RECV				1
#define  NET_MSG_SEND				2
#define  NET_MSG_CONNECT			3

#define RECV_BUF_SIZE               65536
#define Hash_Map                    std::map

class Connection
{
public:
	Connection();

	virtual ~Connection();

public:

	int32       GetConnectionID();
			    
	int64       GetConnectionData();
			    
	int32       GetConnStatus();
			    
	void        SetConnectionID(int32 dwConnID);
			    
	void	    SetConnectionData(int64 dwData);
			    
	bool	    Close();
			    
	bool	    SetSocket(int32 hSocket);
			    
	int32       GetSocket();
			    
	bool	    ExtractBuffer();
			    
	bool	    DoReceive();
			    
	void	    EventCallBack(const int& m_efd, struct epoll_event* pEv,func fun);
			    
	bool	    IsConnectionOK();
			    
	bool	    SetConnectionOK(bool bOk);
			    
	bool        Clear();
			    
	bool        SendBuffer(NetPacket*	pBuff);

	SendStatus  DoSend();

	int32       GetFd();

public:

	int32	                m_fd;
			                
	int32	                m_ConnID;
			                
	bool	                m_ConnComplete;
			                                
	uint32                  m_RecvOffIndex = 0;
			                
	uint32                  m_nRecvSize = 0;

	//
	char*                   m_pRecvBuf = nullptr;

	//-----------------------------


	NetPacket*              pSendMemoryAddr = nullptr;

	uint32                  m_SendOffIndex = 0;

	uint32                  m_nSendSize = 0;

	std::queue<NetPacket*>  m_SendPackQueue;

	std::mutex              m_mutex;

	uint64                  m_lastRecvTime = 0;

};

#endif
