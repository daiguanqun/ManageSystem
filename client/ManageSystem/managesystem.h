#ifndef MANAGESYSTEM_H
#define MANAGESYSTEM_H

#include <QtWidgets/QMainWindow>
#include <QMap>
#include "ui_managesystem.h"

class ManageSystem : public QMainWindow
{
	Q_OBJECT

public:
	ManageSystem(QWidget *parent = 0);
	~ManageSystem();

	private slots:
	void OnShowWidget(const int nItemValue);
private:
	void init();
	private slots:
	void OnExit();
private:
	Ui::ManageSystemClass ui;
	QWidget* m_pCurrentWidget;
	QMap<int, QWidget *> m_mapWidget;
};

#endif // MANAGESYSTEM_H
