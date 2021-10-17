#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int _p_value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(Fixed const &fix);
	
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed &operator=(const Fixed &fix);
};


#endif