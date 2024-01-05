#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &other)
{
	this->value = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		this->value = other.getRawBits();
	}
	return *this;
}
Fixed::Fixed(const int x)
{
	setRawBits(x << this->fractionalBits);
}

Fixed::Fixed(const float x)
{
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
	return (output << fixed.toFloat());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	if (this->getRawBits() == fixed.getRawBits())
	{
		return true;
	}
	return false;
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	if (this->getRawBits() != fixed.getRawBits())
	{
		return true;
	}
	return false;
}
bool Fixed::operator<=(const Fixed &fixed) const
{
	if (this->getRawBits() <= fixed.getRawBits())
	{
		return true;
	}
	return false;
}
bool Fixed::operator>=(const Fixed &fixed) const
{
	if (this->getRawBits() >= fixed.getRawBits())
	{
		return true;
	}
	return false;
}
bool Fixed::operator<(const Fixed &fixed) const
{
	if (this->getRawBits() < fixed.getRawBits())
	{
		return true;
	}
	return false;
}
bool Fixed::operator>(const Fixed &fixed) const
{
	if (this->getRawBits() > fixed.getRawBits())
	{
		return true;
	}
	return false;
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	Fixed n;
	n.setRawBits((this->getRawBits() * fixed.getRawBits()) >> fractionalBits);
	return n;
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	Fixed n;
	if (fixed.getRawBits() == 0)
		return *this;
	n.setRawBits((this->getRawBits() << fractionalBits) / fixed.getRawBits());
	return n;
}
Fixed Fixed::operator+(const Fixed &fixed) const
{
	Fixed n;
	n.setRawBits((this->getRawBits() + fixed.getRawBits()));
	return n;
}
Fixed Fixed::operator-(const Fixed &fixed) const
{
	Fixed n;
	n.setRawBits((this->getRawBits() - fixed.getRawBits()));
	return n;
}

Fixed Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

const Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if(fixed1.getRawBits() < fixed2.getRawBits())
		return(fixed1);
	else	
		return(fixed2);
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if(fixed1.getRawBits() < fixed2.getRawBits())
		return(fixed1);
	else	
		return(fixed2);
}

const Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if(fixed1.getRawBits() < fixed2.getRawBits())
		return(fixed2);
	else	
		return(fixed1);
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if(fixed1.getRawBits() < fixed2.getRawBits())
		return(fixed2);
	else	
		return(fixed1);
}
