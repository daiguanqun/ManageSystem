#include "DB.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QDir>
#include <QMessageBox>



DB::DB()
	:m_db(QSqlDatabase::addDatabase("QSQLITE"))
{
	QString strPath = QDir::currentPath() + QString("/test.db");
	qDebug() << strPath;
	m_db.setDatabaseName(strPath);
	m_db.open();
}


DB::~DB()
{
	m_db.close();
}

bool DB::UserAuth(const QString& strUsername, const QString& strPassword, User& user)
{
	QSqlQuery query;
	query.prepare("select privilegecode from user where username=:username and password=:password");
	query.bindValue(":username", strUsername);
	query.bindValue(":password", strPassword);
	if (query.exec())
	{
		qDebug() << query.lastQuery();
		int nPrivilegeCode = query.record().indexOf("privilegecode");
		if (query.next()) {
			user.SetUsername(strUsername);
			user.SetPassword(strPassword);
			user.SetPrivilege(query.value(nPrivilegeCode).toInt());
			return true;
		}
	}

	return false;
}

bool DB::UserCreate(const User& user)
{
	QSqlQuery query;
	query.prepare("INSERT INTO user (username, password, privilegecode) VALUES (:username, :password, :privilegecode)");
	query.bindValue(":username", user.Username());
	query.bindValue(":password", user.Password());
	query.bindValue(":privilegecode", user.Privilege());
	bool bRet = query.exec();
	qDebug() << query.lastError().text();
	return bRet;
}

void DB::UserAlter(const int nId, const int nCode)
{
	QSqlQuery query;
	query.prepare("UPDATE user set privilegecode = :privilegecode where id = :id");
	query.bindValue(":id", nId);
	query.bindValue(":privilege", nCode);
	query.exec();
}

void DB::UserQuery(QList<QPair<int, User>>& result)
{
	result.clear();

	QSqlQuery query;
	query.prepare("select id, username, password, privilegecode from user");
	if (query.exec())
	{
		int nIdIndex = query.record().indexOf("id");
		int nUsernameIndex = query.record().indexOf("username");
		int nPasswordIndex = query.record().indexOf("password");
		int nPrivilegeIndex = query.record().indexOf("privilegecode");
		while (query.next())
		{
			result.append(QPair<int, User>(query.value(nIdIndex).toInt(), User(
				query.value(nUsernameIndex).toString(), 
				query.value(nPasswordIndex).toString(), 
				query.value(nPrivilegeIndex).toInt()
			)));
		}
	}
}

void DB::UserQuery(const QString& strUsername, QList<QPair<int, User>>& result)
{
	QSqlQuery query;
	query.prepare("select id, username, password, privilegecode from user where username=:username");
	query.bindValue(":username", strUsername);
	if (query.exec())
	{
		int nIdIndex = query.record().indexOf("id");
		int nUsernameIndex = query.record().indexOf("username");
		int nPasswordIndex = query.record().indexOf("password");
		int nPrivilegeIndex = query.record().indexOf("privilegecode");
		while (query.next())
		{
			result.append(QPair<int, User>(query.value(nIdIndex).toInt(), User(
				query.value(nUsernameIndex).toString(), 
				query.value(nPasswordIndex).toString(), 
				query.value(nPrivilegeIndex).toInt()
			)));
		}
	}
}

void DB::UserDelete(const int nId)
{
	QSqlQuery query;
	query.prepare("DELETE FROM user where id = :id");
	query.bindValue(":id", nId);
	query.exec();
}
