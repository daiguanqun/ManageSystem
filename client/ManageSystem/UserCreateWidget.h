#ifndef USERCREATEWIDGET_H
#define USERCREATEWIDGET_H

#include <QWidget>
#include "ui_UserCreateWidget.h"

class UserCreateWidget : public QWidget
{
	Q_OBJECT

public:
	UserCreateWidget(QWidget *parent = 0);
	~UserCreateWidget();

	private slots:
	void OnSaveBtnClicked();
private:
	Ui::UserCreateWidget ui;
};

#endif // USERCREATEWIDGET_H
