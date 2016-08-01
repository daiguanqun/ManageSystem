#ifndef MENUITEM_H
#define MENUITEM_H

#include <QWidget>
#include <QIcon>
#include "ui_MenuItem.h"

class MenuItem : public QWidget
{
	Q_OBJECT

public:
	MenuItem(QWidget *parent = 0);
	MenuItem(bool bSubItemShow, QWidget *parent = 0);
	~MenuItem();

	void SetItemText(const QString& strItemText);
	void AddSubItem(const QString& strItemText, const int nItemValue);
signals:
	void itemClicked(int);
	private slots:
	void OnExpandButtonClicked();
private:
	Ui::MenuItem ui;

	QIcon m_IconUp;
	QIcon m_IconDown;
	bool m_bSubItemShow;
};

#endif // MENUITEM_H
