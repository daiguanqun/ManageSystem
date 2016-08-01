#ifndef SOFTWAREWIDGET_H
#define SOFTWAREWIDGET_H

#include <QWidget>
#include "ui_SoftwareWidget.h"

class SoftwareWidget : public QWidget
{
	Q_OBJECT

public:
	SoftwareWidget(QWidget *parent = 0);
	~SoftwareWidget();

private:
	Ui::SoftwareWidget ui;
};

#endif // SOFTWAREWIDGET_H
