
#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->_p_value = 0;
}

Fixed::Fixed(const Fixed &fix)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->_p_value = fix.getRawBits();
}

Fixed::Fixed(int const value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_p_value = (value << Fixed::bits);
}

Fixed::Fixed(float const value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_p_value = roundf(value * (1 << Fixed::bits));
}

Fixed::~Fixed()	{//	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &fix)
{
    // std::cout << "Assignation operator called" << std::endl;
    if (this == &fix)
        return (*this);
    this->_p_value = fix.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_p_value);
}

void Fixed::setRawBits(int const raw) {	this->_p_value = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_p_value / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return (this->_p_value >> Fixed::bits);
}

bool Fixed::operator>(Fixed const &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(Fixed const &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(Fixed const &other)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() + other.getRawBits());
	return (val);
}

Fixed Fixed::operator-(Fixed const &other)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() - other.getRawBits());
	return (val);
}

Fixed Fixed::operator*(Fixed const &other)
{
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)other.getRawBits());
	val.setRawBits((tmp1 * tmp2) / (1 << Fixed::bits));
	return (val);
}

Fixed Fixed::operator/(Fixed const &other)
{
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)other.getRawBits());
	val.setRawBits((tmp1 * (1 << Fixed::bits)) / tmp2);
	return (val);
}

Fixed Fixed::operator++()
{
	this->_p_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->_p_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &min(Fixed const &a, Fixed const &b)	{	return (Fixed::min(a, b));	}

Fixed &min(Fixed &a, Fixed &b)	{	return (Fixed::min(a, b));}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &max(Fixed const &a, Fixed const &b)	{	return (Fixed::max(a, b)); }

Fixed &max(Fixed &a, Fixed &b)	{	return (Fixed::max(a, b));	}