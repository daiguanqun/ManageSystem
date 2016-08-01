#ifndef OPERATEWIDGET_H
#define OPERATEWIDGET_H

#include <QWidget>
#include "ui_OperateWidget.h"

class OperateWidget : public QWidget
{
	Q_OBJECT

public:
	OperateWidget(const int nId, QWidget *parent = 0);
	~OperateWidget();

signals:
	void modifyItem(int);
	void deleteItem(int);
	private slots:
	void OnModifyBtnClicked();
	void OnDeleteBtnClicked();
private:
	Ui::OperateWidget ui;
	int m_nItemId;
};

#endif // OPERATEWIDGET_H
