#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <exception>
# include <iostream>
# include <math.h>
# include <cmath>
# include <limits>

class Converter
{
private:
	Converter();
	double	value;
	bool	isdigit;
public:
	Converter(std::string inp);
	Converter(const Converter &_converter);
	Converter &operator= (const Converter &_converter);

	~Converter();

	int		to_int();
	char	to_char();
	float	to_float();
	double	to_double();
};

#endif