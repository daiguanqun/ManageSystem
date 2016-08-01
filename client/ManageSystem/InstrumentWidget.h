#ifndef INSTRUMENTWIDGET_H
#define INSTRUMENTWIDGET_H

#include <QWidget>
#include "ui_InstrumentWidget.h"

class InstrumentWidget : public QWidget
{
	Q_OBJECT

public:
	InstrumentWidget(QWidget *parent = 0);
	~InstrumentWidget();

private:
	Ui::InstrumentWidget ui;
};

#endif // INSTRUMENTWIDGET_H
