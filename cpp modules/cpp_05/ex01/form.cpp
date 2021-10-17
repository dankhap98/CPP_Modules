#include "Form.hpp"


Form::Form(/* args */):_name("No name"), _signed(false), _grade_for_sign(1), _grade_for_execute(1)
{
}

Form::Form(const std::string &name, const int Sign_Grade, const int Execute_Grade)
: _name(name), _signed(false), _grade_for_sign(Sign_Grade), _grade_for_execute(Execute_Grade)
{
	if (_grade_for_execute < 1 || _grade_for_sign < 1)
		throw Form::GradeTooHighException();
	if (_grade_for_execute > 150 || _grade_for_sign > 150)
		throw Form::GradeTooLowExeption();
}

Form::Form(const Form &form): _name(form._name), _signed(form._signed), _grade_for_sign(form._grade_for_sign), _grade_for_execute(form._grade_for_execute)
{
	if (_grade_for_execute < 1 || _grade_for_sign < 1)
		throw Form::GradeTooHighException();
	if (_grade_for_execute > 150 || _grade_for_sign > 150)
		throw Form::GradeTooLowExeption();
}

Form& Form::operator = (const Form &form)
{
	if (this == &form)
		return (*this);
	this->_signed = form._signed;
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getSignGrade() const
{
	return (this->_grade_for_sign);
}

int Form::getExecuteGrade() const
{
	return (this->_grade_for_execute);
}

void Form::beSigned(const Bureaucrat& b)
{
	if (this->_grade_for_sign < b.getGrade())
		throw Form::GradeTooLowExeption();
	else
		this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form: Grade is too high");
}


const char* Form::GradeTooLowExeption::what() const throw()
{
	return ("Form: Grade is too Low");
}

Form::~Form()
{
}

std::ostream& operator<<(std::ostream& s, const Form& form)
{
	std::string sign = "true";

	if (form.getSigned() == false)
		sign = "false";
	s << form.getName() << " form " << "signed:" << sign << " \ngrade for sign: " << form.getSignGrade() << " \ngrade for execute: " << form.getExecuteGrade();
	return (s);
}