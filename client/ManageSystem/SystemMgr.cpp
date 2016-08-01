#include "SystemMgr.h"

User SystemMgr::m_CurrentUser = User();
DB* SystemMgr::m_DB = NULL;

SystemMgr::SystemMgr()
{
}


SystemMgr::~SystemMgr()
{
	if (m_DB) {
		delete m_DB;
		m_DB = NULL;
	}
}

bool SystemMgr::UserAuth(QString username, QString password)
{
	if (!m_DB) {
		m_DB = new DB();
	}
	return m_DB->UserAuth(username, password, m_CurrentUser);
}
