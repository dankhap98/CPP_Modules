#include "A.hpp"

A::A()
{
	
}

A::~A()
{
	
}

A::A(const A &_A)
{
	*this = _A;
}

A& A::operator = (const A &_A)
{
	if (this == &_A)
		return (*this);
	(void)_A;
	return (*this);
}