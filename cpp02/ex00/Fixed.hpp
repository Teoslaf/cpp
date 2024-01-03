#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
private:
	int *x;

public:
	Fixed()
	{
		x = new int(0);
	}
	Fixed(const Fixed &other)
	{
		x = new int(*other.x);
	}
	Fixed &operator=(const Fixed &other)
	{
		if(this != &other)
		{
			*x = *other.x;
		}
		return *this;
	}
	~Fixed()
	{
		delete x;
	}
	void setValue(int y)
	{
		*x = y;
	}
	int* getValue()
	{
		return x;
	}
};

#endif
