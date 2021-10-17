

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base *p)
{
	std::cout << "Reference :" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "A class" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B class" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C class" << std::endl;
	else
		std::cout << "undefined class" << std::endl;
}

void	identify(Base &p)
{
	std::cout << "Reference :" << std::endl;
	if (dynamic_cast<A*>(&p))
		std::cout << "A class" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B class" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C class" << std::endl;
	else
		std::cout << "undefined class" << std::endl;
}

int		main()
{
	Base	*base;
	int		_rand;

	_rand = rand() % 3;
	if (_rand == 0)
		base = new A;
	else if (_rand == 1)
		base = new B;
	else
		base = new C;
	identify(base);
	identify(*base);
	delete base;
}