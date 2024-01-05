#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;

public:
	Point();
	~Point();
	Point(const float x, const float y);
	Fixed getX() const;
	Fixed getY() const;

	Point(const Point &other);
	Point &operator=(const Point &other);
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif
