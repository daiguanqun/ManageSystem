#include <QMessageBox>
#include <QPicture>
#include "LoginDialog.h"
#include "SystemMgr.h"
#include "Const.h"

LoginDialog::LoginDialog(QWidget *parent)
	: QDialog(parent)
{
	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	ui.setupUi(this);
	connect(ui.loginButton, SIGNAL(clicked()), this, SLOT(OnLogin()));
	connect(ui.exitButton, SIGNAL(clicked()), this, SLOT(OnExit()));
	ui.usernameEdit->setPlaceholderText(USERNAME);
	ui.passwordEdit->setPlaceholderText(PASSWORD);
	ui.label->setFocus();
}

LoginDialog::~LoginDialog()
{

}

void LoginDialog::OnLogin()
{
	if (SystemMgr::GetInstance()->UserAuth(ui.usernameEdit->text().trimmed(), ui.passwordEdit->text().trimmed()))
	{
		emit accept();
	}
	else
	{
		QMessageBox::warning(this, APPNAME, LOGINWRONGUSERNAMEORPASSWORD);
	}
}

void LoginDialog::OnExit()
{
	emit reject();
}