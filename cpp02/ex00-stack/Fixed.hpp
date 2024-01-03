#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
private:
	int value;
	static const int fractionalBits;
public:
	Fixed();
	Fixed( Fixed &other);
	Fixed &operator=( Fixed &other);
	~Fixed();
	void setRawBits( int const raw);
	int getRawBits( void );
};

#endif
