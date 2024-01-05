#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	// Test Case 1: Point inside the triangle
	Point A(0, 0);
	Point B(4, 0);
	Point C(2, 3);
	Point P_inside(2, 1);

	if (bsp(A, B, C, P_inside))
		std::cout << "smash" << std::endl;
	else
		std::cout << "pass" << std::endl;

	// Test Case 2: Point outside the triangle
	Point P_outside(5, 5);
	if (!bsp(A, B, C, P_outside))
		std::cout << "smash" << std::endl;
	else
		std::cout << "pass" << std::endl;

	// Test Case 3: Point on the edge
	Point P_on_edge(2, 0);
	if (!bsp(A, B, C, P_on_edge))
		std::cout << "smash" << std::endl;
	else
		std::cout << "pass" << std::endl;
	return 0;
}

// int main()
// {
// <comparison operators>
// 	Fixed a(52.23f);
// 	Fixed b(3);
// 	if (a.operator!=(b))
// 		std::cout << "true" << std::endl;
// 	else
// 		std::cout << "false" << std::endl;
// }

// int main()
// {
// * / - +
// 	Fixed a(52.23f);
// 	Fixed b(3);
// 	std::cout << a * b << std::endl;
// 	std::cout << a / b << std::endl;
// 	std::cout << a - b << std::endl;
// 	std::cout << a + b << std::endl;
// }

// int main(void)
// {
// ++ --
// 	Fixed a;
// 	Fixed b(1);
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << --b << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << b-- << std::endl;
// 	std::cout << b << std::endl;
// 	return 0;
// }

// int main(void)
// {
// min and max
// 	Fixed a(0.54f);
// 	Fixed b(20);
// 	Fixed const c(33);
// 	Fixed const d(12);
// 	std::cout << "Minimum: " << Fixed::min(a, b) << std::endl;
// 	std::cout << "Max: " << Fixed::max(a, b) << std::endl;
// 	std::cout << "Minimum: " << Fixed::min(c, d) << std::endl;
// 	std::cout << "Max: " << Fixed::max(c, d) << std::endl;
// 	return 0;
// }
