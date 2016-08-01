#ifndef PRIVILEGEWIDGET_H
#define PRIVILEGEWIDGET_H

#include <QWidget>
#include "ui_PrivilegeWidget.h"

class PrivilegeWidget : public QWidget
{
	Q_OBJECT

public:
	PrivilegeWidget(QWidget *parent = 0);
	PrivilegeWidget(const int nId, const int nPrivilegeCode, QWidget *parent = 0);
	~PrivilegeWidget();
	void SetAvailable(bool bAvailable);
	int GetPrivilegeCode();
signals:
	void valueChanged();
private:
	void init();
private:
	Ui::PrivilegeWidget ui;
	int m_nItemId;
	int m_nPrivilegeCode;
};

#endif // PRIVILEGEWIDGET_H
