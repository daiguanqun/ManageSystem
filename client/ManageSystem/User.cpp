#include "User.h"
#include "PrivilegeCode.h"



User::User()
{
}


User::User(QString username, QString password, int privilege)
	:m_strUsername(username), m_strPassword(password), m_nPrivilege(privilege)
{

}

User::~User()
{
}

QString User::Username() const
{
    return m_strUsername;
}

void User::SetUsername(const QString &strUserName)
{
    m_strUsername = strUserName;
}

QString User::Password() const
{
    return m_strPassword;
}

void User::SetPassword(const QString &strPassword)
{
    m_strPassword = strPassword;
}

int User::Privilege() const
{
	return m_nPrivilege;
}

void User::SetPrivilege(const int nPrivilege)
{
	m_nPrivilege = nPrivilege;
}
