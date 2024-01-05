#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed det_ABC = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));
	Fixed alpha = (point.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - point.getY()) + c.getX() * (point.getY() - b.getY())) / det_ABC;
	Fixed beta = (a.getX() * (point.getY() - c.getY()) + point.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - point.getY())) / det_ABC;
	Fixed gamma = (a.getX() * (b.getY() - point.getY()) + b.getX() * (point.getY() - a.getY()) + point.getX() * (a.getY() - b.getY())) / det_ABC;

	return Fixed(0) < alpha && alpha < Fixed(1) && Fixed(0) < beta && beta < Fixed(1) && Fixed(0) < gamma && gamma < Fixed(1);
}
