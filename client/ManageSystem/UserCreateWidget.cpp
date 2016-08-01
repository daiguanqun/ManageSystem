#include <QMessageBox>
#include "UserCreateWidget.h"
#include "User.h"
#include "SystemMgr.h"
#include "Const.h"

UserCreateWidget::UserCreateWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.saveButton, SIGNAL(clicked()), this, SLOT(OnSaveBtnClicked()));
}

UserCreateWidget::~UserCreateWidget()
{

}

void UserCreateWidget::OnSaveBtnClicked()
{
	int nPrivilege = ui.widget->GetPrivilegeCode();
	if (SystemMgr::GetInstance()->GetDB()->UserCreate(User(ui.usernameEdit->text(), ui.passwordEdit->text(), nPrivilege)))
	{
		QMessageBox::information(this, APPNAME, SUCCESS);
	}
	else
	{
		QMessageBox::warning(this, APPNAME, FAILED);
	}
}
