#pragma once
#include <vector>
#include <string>
#include <fstream>

namespace GRA_TOOL
{
	struct Point
	{
		int x_, y_;
		Point(int x, int y)
			:
			x_(x), y_(y)
		{}
	};
	class Shape
	{
	public:
		Shape(const std::vector<Point>& points);
		std::vector<Point> points_;
	};

	class Tool
	{
	public:
		static std::vector<Point>&& GetPointFromFile(const std::string sourse);
		static void WritePointsToFile(const std::string target, const std::vector<Point>& points);
		static std::vector<Shape> GetMiddleShape(const Shape& shapeStart, const Shape& shapeEnd, int numOfMiddle);
	};
}