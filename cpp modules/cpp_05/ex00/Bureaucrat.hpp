#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat(/* args */);
	Bureaucrat(const std::string &_name, int _grade);
	Bureaucrat(const Bureaucrat &_Bure);
	virtual ~Bureaucrat();
	Bureaucrat &operator = (const Bureaucrat &_Bure);

	const std::string getName() const;
    int getGrade() const;

	void    IncrementGrade();
    void    DecrementGrade();

    class   GradeTooHighException : public std::exception
    {
        public:
    		virtual const char *what() const throw();
    };
    class   GradeTooLowException : public std::exception
    {
    	public:
            virtual const char *what() const throw();
    };
};


#endif