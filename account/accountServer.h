#ifndef CHATSERVER_H
#define CHATSERVER_H

#include "../lib/messageQueue.h"
#include "../lib/configFile.h"


class CGameService : public IPacketDispatcher
{
private:
	CGameService(void);
	virtual ~CGameService(void);

public:
	static CGameService* GetInstancePtr();

	void		Init();

	void		Uninit();

	void		Run();

	bool		DispatchPacket(CNetPacket* pNetPacket);

public:

	
public:

	bool OnForwardNetPack(CNetPacket* pNetPacket);

	//*********************��Ϣ�������忪ʼ******************************
	bool OnMsgWatchHeartBeatReq(CNetPacket* pNetPacket);
	//*********************��Ϣ�����������******************************

	void testSendProtobuf(uint32 connid, uint32_t tempcount);

};

#endif