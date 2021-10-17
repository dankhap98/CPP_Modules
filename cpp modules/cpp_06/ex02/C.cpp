#include "C.hpp"

C::C()
{

}

C::~C()
{

}

C::C(const C &_A)
{
	*this = _A;
}

C& C::operator = (const C &_A)
{
	if (this == &_A)
		return (*this);
	(void)_A;
	return (*this);
}