#include "Fixed.hpp"
#include <iostream>

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
Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(x << this->fractionalBits);
}

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
