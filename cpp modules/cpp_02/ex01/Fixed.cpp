
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_p_value = 0;
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_p_value = fix.getRawBits();
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_p_value = (value << Fixed::bits);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_p_value = roundf(value * (1 << Fixed::bits));
}

Fixed::~Fixed()	{	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &fix)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &fix)
        return (*this);
    this->_p_value = fix.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
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