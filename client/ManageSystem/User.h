#ifndef USER_H
#define USER_H 

#include <QString>
#include "PrivilegeCode.h"

class User
{
public:
	User();
	User(QString username, QString password, int privilege);
	~User();

    QString Username() const;
    void SetUsername(const QString &strUsername);

    QString Password() const;
    void SetPassword(const QString &strPassword);

	int Privilege() const;
	void SetPrivilege(const int nPrivilege);

	bool HasAccountPrivilege() { return m_nPrivilege & ACCOUNTCODE;	}
	bool HasInstrumentPrivilege() { return m_nPrivilege & INSTRUMENTCODE; }
	bool HasInstrumentProductionPrivilege() { return m_nPrivilege & INSTRUMENTPRODUCTIONCODE; }
	bool HasReagentPrivilege() { return m_nPrivilege & REAGENTCODE;	}
	bool HasReagentProductionPrivilege() { return m_nPrivilege & REAGENTPRODUCTIONCODE;	}
	bool HasHospitalPrivilege() { return m_nPrivilege & HOSPITALCODE;	}
private:
    QString m_strUsername;
    QString m_strPassword;
    int	m_nPrivilege;
};

#endif
