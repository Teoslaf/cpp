#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int fractionalBits;

public:
	Fixed();
	~Fixed();
	Fixed(const float x);
	Fixed(const int x);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	void setRawBits(int const raw);
	int getRawBits(void) const;
	int toInt(void) const;
	float toFloat(void) const;

	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>(const Fixed &fixed) const;

	Fixed operator*(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;
	Fixed operator+(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed) const;

	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	static const Fixed &min(Fixed &fixed1, Fixed &fixed2);
	static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
	static const Fixed &max(Fixed &fixed1, Fixed &fixed2);
	static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);


};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif
