#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Insertvalue.h"
#include <QPainter>
#include "TOOL.h"

using namespace GRA_TOOL;

class Insertvalue : public QMainWindow
{
	Q_OBJECT

public:
	Insertvalue(QWidget *parent = Q_NULLPTR);
	void paintEvent(QPaintEvent *event);  // ÷ÿ–¥paintEvent
private:
	Ui::InsertvalueClass ui;
};

void DrawShape(QPainter& painter,Shape shape);
void DrawPrepare(QPainter& painter, bool ifRenderHint);

