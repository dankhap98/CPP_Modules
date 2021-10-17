#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	Form();
	const std::string	_name;
	bool				_signed;
	const int			_grade_for_sign;
	const int			_grade_for_execute;
public:
	~Form();
	Form(const std::string &name, const int Sign_Grade, const int Execute_Grade);
	Form(const Form &_form);

	Form &operator = (const Form &form);

	void			beSigned(const Bureaucrat &_Bureaucrat);
	std::string		getName() const;
	bool			getSigned() const;
	int				getSignGrade() const;
	int				getExecuteGrade() const;

	class GradeTooHighException: public std::exception
	{
		public:
			const char* what() const throw();
	};
	class GradeTooLowExeption: public std::exception
	{
		public:
			const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream &out, const Form &_Form);

#endif