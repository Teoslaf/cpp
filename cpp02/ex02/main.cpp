#include "Fixed.hpp"
#include <iostream>

int main(void)
{

	Fixed a;
	Fixed b(1);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << --b << std::endl;
	std::cout << b << std::endl;
	std::cout << b-- << std::endl;
	std::cout << b << std::endl;
	

	return 0;
}

// min and max

// int main(void)
// {
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
