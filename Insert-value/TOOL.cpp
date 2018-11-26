#include "TOOL.h"
using namespace GRA_TOOL;

using std::ofstream;
using std::ifstream;
using std::vector;
using std::endl;
using std::ios;

GRA_TOOL::Shape::Shape(const std::vector<Point>& points)
	:points_(points)
{
}

std::vector<Point> GRA_TOOL::Tool::GetPointFromFile(const std::string sourse)
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
	// TODO
}
