#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
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
