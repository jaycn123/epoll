#ifndef SERVICE_BASE_H
#define SERVICE_BASE_H

#include "messageQueue.h"
#include "ConnectionManager.h"

class ServiceBase
{
protected:
	ServiceBase(void);

	virtual ~ServiceBase(void);

public:
	static ServiceBase* GetInstancePtr();

	bool   StartNetWork(uint32 port, uint32 maxConnNum);

	bool   StopNetWork();
	
protected:

	ConnectionManager m_ConnManager;

};


#endif /*__SERVICE_BASE_H__*/