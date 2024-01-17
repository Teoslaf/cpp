#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->value = other.getRawBits();
	}
	return *this;
}
// Shift 'x' to the left by 'fractionalBits' positions to convert it to a fixed-point representation.
// Example: If fractionalBits is 8 and 'x' is 10, the binary representation of 10 is shifted left to add fractional bits.
Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(x << this->fractionalBits);
}
// Convert the float 'x' to its fixed-point representation by multiplying it by 2^fractionalBits and rounding to the nearest integer.
// Example: If fractionalBits is 8 and 'x' is 3.75, the calculation is 3.75 * 256 = 960.0, which is rounded to 960.
Fixed::Fixed(const float x)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(x * (1 << this->fractionalBits)));

}

float Fixed::toFloat(void) const
{
	float number = (float)this->getRawBits() / (1 << this->fractionalBits);
	return (number);
}

int Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->fractionalBits);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int Fixed::getRawBits() const
{
	return this->value;
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	// std::cout << std:: endl << "RAW: " << fixed.getRawBits() << std::endl; 
	// std::cout << std:: endl << "TOINT: " << fixed.toInt() << std::endl;
	// std::cout << std:: endl << "TOFLOAT: " << fixed.toFloat() << std::endl;
	return (output);
}
