#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	// std::cout << "consts" << this->x << this->y << std::endl;
}
Point::~Point()
{
	// std::cout << "dest" << std::endl;
}
Point::Point(const float x, const float y) : x(x), y(y)
{
}
Fixed Point::getX() const
{
	return this->x;
}
Fixed Point::getY() const
{
	return this->y;
}
Point::Point(const Point &other) : x(other.getX()), y(other.getY())
{
}
Point &Point::operator=(const Point &other)
{
	( Fixed )this ->x = other.getX();
	( Fixed )this ->y = other.getY();

	return *this;
}
