#include "Fixed.hpp"
#include <iostream>

int main( void )
{
Fixed const b( 10);
Fixed const c(11);
if(b.operator>(c))
	std::cout << "true" << std::endl;
else
	std::cout << "false" << std::endl;

return 0;
}
