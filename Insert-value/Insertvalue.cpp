#include "Insertvalue.h"

using std::vector;
Insertvalue::Insertvalue(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Insertvalue::paintEvent(QPaintEvent * event)
{
	Q_UNUSED(event);
	QPainter painter(this);
	DrawPrepare(painter,true);
	painter.setPen(QPen(QColor(0, 160, 230), 2));
	Shape shape1({
		Point(50,50),
		Point(50,100),
		Point(100,200),
		Point(100,40)
		});
	Shape shape2({
		Point(1000,50),
		Point(1000,100),
		Point(1150,100),
		Point(1150,50)
		});
	DrawShape(painter, shape1);
	DrawShape(painter, shape2);
	vector<Shape> shapes = Tool::GetMiddleShape(shape1, shape2,3);
	for (auto shape : shapes)
	{
		DrawShape(painter, shape);
	}
}

void DrawShape(QPainter& painter,Shape shape)
{
	vector<Line> lines = shape.ToLines();
	for (auto line : lines)
	{
		painter.drawLine(line.start_.x_, line.start_.y_, line.end_.x_, line.end_.y_);
	}
}

void DrawPrepare(QPainter & painter, bool ifRenderHint)
{
	if (ifRenderHint)
		painter.setRenderHint(QPainter::Antialiasing, ifRenderHint);
}
