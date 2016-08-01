#pragma once
#include <QSqlDatabase>
#include <QList>
#include "User.h"

class DB
{
public:
	DB();
	~DB();
public:
	bool UserAuth(const QString& strUsername, const QString& strPassword, User& user);
	bool UserCreate(const User& user);
	void UserAlter(const int nId, const int nCode);
	void UserQuery(QList<QPair<int, User>>& result);
	void UserQuery(const QString& strUsername, QList<QPair<int, User>>& result);
	void UserDelete(const int nId);
private:
	QSqlDatabase m_db;
};

