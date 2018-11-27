#include "TOOL.h"
using namespace GRA_TOOL;

using std::ofstream;
using std::ifstream;
using std::vector;
using std::endl;
using std::ios;
using std::move;


GRA_TOOL::Shape::Shape(const std::vector<Point>& points)
	:points_(points)
{
}

std::vector<Point>&& GRA_TOOL::Tool::GetPointFromFile(const std::string sourse)
{
	vector<Point> results;
	ifstream fp(sourse.c_str(), ios::in);
	int n;
	fp >> n;
	int x, y;
	while (n--)
	{
		fp >> x >> y;
		results.push_back(Point(x, y));
	}
	fp.close();
	return move(results);
}

void GRA_TOOL::Tool::WritePointsToFile(const std::string target, const std::vector<Point>& points)
{
	ofstream fp(target.c_str(),ios::out|ios::ate);
	fp << points.size() << endl;
	for (auto point : points)
	{
		fp << point.x_ << endl;
		fp << point.y_ << endl;
	}
	fp.close();
}

std::vector<Shape> GRA_TOOL::Tool::GetMiddleShape(const Shape & shapeStart, const Shape & shapeEnd, int numOfMiddle)
{
	vector<Shape> result;
	int x, y;
	int pNum = shapeStart.points_.size();
	for (int i = 1; i < numOfMiddle; i++)
	{
		vector<Point> pointsInMiddle;
		for (int j = 0; j < pNum; j++)
		{
			x = (shapeEnd.points_[j].x_ - shapeStart.points_[j].x_)*i / numOfMiddle;
			y = (shapeEnd.points_[j].y_ - shapeStart.points_[j].y_)*i / numOfMiddle;
			pointsInMiddle.push_back(Point(x, y));
		}
		result.push_back(Shape(pointsInMiddle));
	}
	return result;
}
