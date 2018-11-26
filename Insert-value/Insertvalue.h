#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Insertvalue.h"

class Insertvalue : public QMainWindow
{
	Q_OBJECT

public:
	Insertvalue(QWidget *parent = Q_NULLPTR);

private:
	Ui::InsertvalueClass ui;
};
