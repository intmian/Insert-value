#include "Insertvalue.h"
using std::string;
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
	Shape shape1(Tool::GetPointsFromFile(string("car1.txt")));
	//Shape shape2(Tool::GetPointsFromFile(string("car2.txt")));
	DrawShape(painter, shape1);
	//DrawShape(painter, shape2);
	//vector<Shape> shapes = Tool::GetMiddleShape(shape1, shape2,5);
	/*for (auto shape : shapes)
	{
		DrawShape(painter, shape);
	}*/
}

void DrawShape(QPainter & painter,Shape shape)
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
