#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "ui_LoginDialog.h"

class LoginDialog : public QDialog
{
	Q_OBJECT

public:
	LoginDialog(QWidget *parent = 0);
	~LoginDialog();
public slots:
	void OnLogin();
	void OnExit();
private:
	Ui::LoginDialog ui;
};

#endif // LOGINDIALOG_H
