

#include "Converter.hpp"

Converter::Converter()
{
}

Converter::~Converter()
{
}


Converter::Converter(std::string inp)
{
	if (!(inp.at(0) < '0') || !(inp.at(0) > '9'))
	{
		this->isdigit = true;
		this->value = atof(inp.c_str());
	}
	else
		this->isdigit = false;
}

Converter &Converter::operator=(const Converter &_converter)
{
	if (this == &_converter)
		return (*this);
	else
		this->value = _converter.value;
	return (*this);	
}

Converter::Converter(const Converter &_converter)
{
	this->value = _converter.value;
}

int 	Converter::to_int()
{
	int	ret;
	if (this->value < INT32_MIN || this->value > INT32_MAX || !(this->isdigit) || isnan(this->value) || isinf(this->value))
		throw	std::runtime_error("not possible to convert to int");
	ret = static_cast<int>(this->value);
	return (ret);
}

float	Converter::to_float()
{
	float	ret;
	if (!(this->isdigit))
		throw	std::runtime_error("not possible to convert to float");
	ret = static_cast<float>(this->value);
	return (ret);
}

double	Converter::to_double()
{
	if (!(this->isdigit))
		throw	std::runtime_error("not possible to convert to double");
	return (this->value);
}

char	Converter::to_char()
{
	char	ret;

	if (!(this->isdigit) || isnan(this->value) || isinf(this->value))
		throw	std::runtime_error("not possible to convert to char");
	ret = static_cast<char>(this->value);
	if (ret < 33 || ret > 126)
		throw	std::runtime_error("can  not display this char");
	else
		return (ret);
}