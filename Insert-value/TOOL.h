#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
namespace GRA_TOOL
{
	class Point;
	struct PointPolar
	{
		double theta;
		double r;
		PointPolar(const Point& point)
		{
			r = std::sqrt(point.x_ * point.x_ + point.y_ * point.y_);
			theta = std::atan(static_cast<double>(point.y_) / static_cast<double>(point.x_));
		}
	};

	struct Point
	{
		int x_, y_;
		Point(int x, int y)
			:
			x_(x), y_(y)
		{}
	};
	struct Line
	{
		Point start_;
		Point end_;
		Line(const Point& start, const Point& end)
			:
			start_(start), end_(end)
		{}
	};
	class Shape
	{
	public:
		Shape(const std::vector<Point>& points);
		std::vector<Point> points_;
		std::vector<Line> ToLines();
	};
	class Tool
	{
	public:
		static std::vector<Point> GetPointsFromFile(const std::string sourse);
		static void WritePointsToFile(const std::string target, const std::vector<Point>& points);
		static std::vector<Shape> GetMiddleShape(const Shape& shapeStart, const Shape& shapeEnd, int numOfMiddle);
	};
}