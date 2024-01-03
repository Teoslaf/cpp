#include "Fixed.hpp"
#include <iostream>

int main()
{
	Fixed fixed1;
	fixed1.setValue(42);
	Fixed fixed2 = fixed1;
	fixed1.setValue(10);

	std::cout << *fixed1.getValue() <<  *fixed2.getValue() << std::endl;
	Fixed fixed3;
	fixed3 = fixed1;
	fixed1.setValue(15);
	std::cout << *fixed1.getValue() <<  *fixed2.getValue() << *fixed3.getValue() << std::endl;

}
