#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	private:
		Span();
		Span &operator=(const Span &sp);
		std::vector<int> _vec;
		unsigned int _vecLen;
	public:

		Span(const Span &sp);
		Span(unsigned int N);
		~Span();
		void addNumber(int number);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		// class NumbersException: public std::exception
		// {	
		// 	virtual const char* what() const throw()
		// 	{ 
		// 		return ("Not enough numbers !"); 
		// 	} 
		// };
		// class VectorFullException : public std::exception
		// {
		// 	virtual const char *what() const throw()
		// 	{
		// 		return ("Vector Full !");
		// 	}
		// };
};

#endif