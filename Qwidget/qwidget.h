#pragma once

#include <QtWidgets/QWidget>
#include "ui_qwidget.h"

class Qwidget : public QWidget
{
	Q_OBJECT

public:
	Qwidget(QWidget *parent = Q_NULLPTR);

private:
	Ui::QwidgetClass ui;
};
