#ifndef USERCHECKWIDGET_H
#define USERCHECKWIDGET_H

#include <QWidget>
#include "ui_UserCheckWidget.h"

class UserCheckWidget : public QWidget
{
	Q_OBJECT

public:
	UserCheckWidget(QWidget *parent = 0);
	~UserCheckWidget();

	private slots:
	void OnSearchBtnClicked();
	void OnSearchAllBtnClicked();
	void OnDeleteItem(int nId);
	void OnModifyItem(int nId);
private:
	void AddOneAccount(const int nId, const QString& strUsername, int nPrivilegeCode);

private:
	Ui::UserCheckWidget ui;
};

#endif // USERCHECKWIDGET_H
