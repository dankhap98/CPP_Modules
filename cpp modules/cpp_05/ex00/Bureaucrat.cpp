#include "Bureaucrat.hpp"



Bureaucrat::Bureaucrat() : _name("No name")
{
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &_Bure) : _name(_Bure._name)
{
	this->_grade = _Bure._grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &_name, int _grade) : _name(_name)
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade = _grade;
	}
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &_Bure)
{
    if (this == &_Bure)
        return (*this);
    this->_grade = _Bure._grade;
    return (*this);
}

void    Bureaucrat::IncrementGrade()
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void    Bureaucrat::DecrementGrade()
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
}

const std::string	Bureaucrat::getName() const	{ return (this->_name);	}

int     Bureaucrat::getGrade() const {	return (this->_grade);	}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too Low");
}
