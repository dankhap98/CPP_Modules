 
#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &_mut_stack) : std::stack<T>(_mut_stack)
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator= (const MutantStack<T> &_mut_stack)
{
	if (this == &_mut_stack)
		return (*this);
	this->c = _mut_stack.c;
	return (*this);
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return (this->c.end());
}