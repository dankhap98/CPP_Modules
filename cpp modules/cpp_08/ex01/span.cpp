
#include "span.hpp"
 
Span::Span(unsigned int N): _vecLen(N)
{
	this->_vec.clear();
}

Span::~Span()
{

}

void Span::addNumber(int number)
{
	if (this->_vecLen > this->_vec.size())
	{
		this->_vec.push_back(number);
	}
	else
		throw std::runtime_error("Vector is full");	
}

unsigned int	Span::longestSpan()
{
	if (this->_vec.size() < 2)
		throw std::runtime_error("size < 2");
	std::sort(this->_vec.begin(), this->_vec.end());
	return (this->_vec[this->_vec.size() - 1] - this->_vec[0]);	
}

unsigned int	Span::shortestSpan()
{
	int	min;

	if (this->_vec.size() < 2)
		throw std::runtime_error("size < 2");
	std::sort(this->_vec.begin(), this->_vec.end());
	std::vector<int>::iterator it = this->_vec.begin();
	std::vector<int>::iterator ij = this->_vec.begin() + 1;
	min = *ij - *it;
		for (unsigned long i = 0; i < this->_vec.size() - 1; i++)
	{
		min = std::min(min, *ij - *it);
		ij++;
		it++;
	}
	return (min);
}

Span::Span(const Span &sp)
{
	*this = sp;
}

Span &Span::operator=(const Span &sp)
{
	if (this == &sp)
		return (*this);
	this->_vecLen = sp._vecLen;
	this->_vec.clear();
	this->_vec.assign(sp._vec.begin(), sp._vec.end());
	return (*this);
}