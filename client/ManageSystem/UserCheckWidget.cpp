#include <QTableWidgetItem>
#include <QDebug>
#include "UserCheckWidget.h"
#include "PrivilegeWidget.h"
#include "OperateWidget.h"
#include "User.h"
#include "SystemMgr.h"

UserCheckWidget::UserCheckWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.searchButton, SIGNAL(clicked()), this, SLOT(OnSearchBtnClicked()));
	connect(ui.searchAllButton, SIGNAL(clicked()), this, SLOT(OnSearchAllBtnClicked()));
	ui.tableWidget->verticalHeader()->setVisible(false);
	ui.tableWidget->setColumnWidth(0, 40);
	ui.tableWidget->setColumnWidth(1, 200);
	ui.tableWidget->setColumnWidth(2, 600);
	ui.tableWidget->setColumnWidth(3, 100);
}

UserCheckWidget::~UserCheckWidget()
{

}

void UserCheckWidget::OnSearchBtnClicked()
{
	ui.tableWidget->setRowCount(0);
	QList<QPair<int, User>> result;
	SystemMgr::GetInstance()->GetDB()->UserQuery(ui.lineEdit->text(), result);
	for (auto it = result.begin(); it != result.end(); ++it)
	{
		AddOneAccount((*it).first, (*it).second.Username(), (*it).second.Privilege());
	}
}

void UserCheckWidget::OnSearchAllBtnClicked()
{
	ui.tableWidget->setRowCount(0);
	QList<QPair<int, User>> result;
	SystemMgr::GetInstance()->GetDB()->UserQuery(result);
	for (auto it = result.begin(); it != result.end(); ++it)
	{
		AddOneAccount((*it).first, (*it).second.Username(), (*it).second.Privilege());
	}
}

void UserCheckWidget::AddOneAccount(const int nId, const QString& strUsername, int nPrivilegeCode)
{
	QTableWidgetItem* id = new QTableWidgetItem(QString("%1").arg(nId));
	id->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
	QTableWidgetItem* name = new QTableWidgetItem(strUsername);
	name->setTextAlignment(Qt::AlignRight | Qt:: AlignCenter);
	PrivilegeWidget* pPrivilegeWidget = new PrivilegeWidget(nId, nPrivilegeCode, ui.tableWidget);
	OperateWidget* pOperateWidget = new OperateWidget(nId, ui.tableWidget);
	connect(pOperateWidget, SIGNAL(modifyItem(int)), this, SLOT(OnModifyItem(int)));
	connect(pOperateWidget, SIGNAL(deleteItem(int)), this, SLOT(OnDeleteItem(int)));
	int row = ui.tableWidget->rowCount();
	ui.tableWidget->insertRow(row);
	ui.tableWidget->setItem(row, 0, id);
	ui.tableWidget->setItem(row, 1, name);
	ui.tableWidget->setCellWidget(row, 2, pPrivilegeWidget);
	ui.tableWidget->setCellWidget(row, 3, pOperateWidget);
	ui.tableWidget->setRowHeight(row, 50);
}

void UserCheckWidget::OnModifyItem(int nId)
{
	for (int i = 0; i < ui.tableWidget->rowCount(); ++i)
	{
		QString strId = ui.tableWidget->item(i, 0)->text();
		if (strId == QString("%1").arg(nId))
		{
			PrivilegeWidget* pPrivilegeWidget = (PrivilegeWidget *)ui.tableWidget->cellWidget(i, 2);
			SystemMgr::GetInstance()->GetDB()->UserAlter(nId, pPrivilegeWidget->GetPrivilegeCode());
		}
	}
}

void UserCheckWidget::OnDeleteItem(int nId)
{
	SystemMgr::GetInstance()->GetDB()->UserDelete(nId);
	for (int i = 0; i < ui.tableWidget->rowCount(); ++i)
	{
		QString strId = ui.tableWidget->item(i, 0)->text();
		if (strId == QString("%1").arg(nId))
		{
			ui.tableWidget->removeRow(i);
			break;
		}
	}
}