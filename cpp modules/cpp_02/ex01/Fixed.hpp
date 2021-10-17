#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int _p_value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(Fixed const &fix);
	Fixed(float const value);
	Fixed(const int integer);

	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	Fixed &operator=(const Fixed &fix);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif