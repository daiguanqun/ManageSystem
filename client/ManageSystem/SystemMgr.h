#ifndef SYSTEMMGR_H
#define SYSTEMMGR_H

#include "User.h"
#include "DB.h"

class SystemMgr
{
private:
	SystemMgr();
public:
	~SystemMgr();
	static SystemMgr* GetInstance() {
		static SystemMgr instance;
		return &instance;
	}

	DB* GetDB() {
		if (!m_DB)
			m_DB = new DB();
		return m_DB;
	}

	User* GetCurrentUser() {
		return &m_CurrentUser;
	}
	bool UserAuth(QString username, QString password);
private:
	static User m_CurrentUser;
	static DB* m_DB;
};
#endif // !SYSTEMMGR_H

