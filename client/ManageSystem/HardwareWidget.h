#ifndef HARDWAREWIDGET_H
#define HARDWAREWIDGET_H

#include <QWidget>
#include "ui_HardwareWidget.h"

class HardwareWidget : public QWidget
{
	Q_OBJECT

public:
	HardwareWidget(QWidget *parent = 0);
	~HardwareWidget();

private:
	Ui::HardwareWidget ui;
};

#endif // HARDWAREWIDGET_H
