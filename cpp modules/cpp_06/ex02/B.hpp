#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B : public Base
{
	public:
		B();
		B(const B &_A);
		virtual ~B();
		B &operator = (const B &_A);
};

#endif