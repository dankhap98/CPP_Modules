#include "B.hpp"

B::B()
{
	
}

B::~B()
{

}

B::B(const B &_B)
{
	*this = _B;
}

B& B::operator = (const B &_B)
{
	if (this == &_B)
		return (*this);
	(void)_B;
	return (*this);
}