#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
namespace GRA_TOOL
{
	class Point;
	class PointPolar
	{
	public:
		double theta_;
		double r_;
		PointPolar(const Point& point)
		{
			r_ = std::sqrt(point.x_ * point.x_ + point.y_ * point.y_);
			theta_ = std::atan(static_cast<double>(point.y_) / static_cast<double>(point.x_));
		}
		PointPolar(double theta,double r)
			:
			theta_(theta),
			r_(r)
		{}
	};

	class Point
	{
	public:
		int x_, y_;
		Point(int x, int y)
			:
			x_(x), y_(y)
		{}
		Point(PointPolar pp)
		{
			x_ = std::cos(pp.theta_) *pp.r_;
			y_ = std::sin(pp.theta_) *pp.r_;
		}
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
		static std::vector<PointPolar> PointsToPointsPolar(const std::vector<Point> points);
		static std::vector<Point> PointsPolarToPoints(const std::vector<PointPolar> PointsPolars);
		static std::vector<Point> GetPointsFromFile(const std::string sourse);
		static void WritePointsToFile(const std::string target, const std::vector<Point>& points);
		static std::vector<Shape> GetMiddleShape(const Shape& shapeStart, const Shape& shapeEnd, int numOfMiddle);
		static std::vector<Shape> GetMiddleShapeVector(const Shape& shapeStart, const Shape& shapeEnd, int numOfMiddle);
	};
}