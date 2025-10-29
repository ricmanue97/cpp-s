#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExec;



	public:
		Form();
		Form(const std::string name, const int gradeSign, const int gradeExec);
		Form(const Form& og);
		Form&	operator=(const Form& og);
		~Form();

		std::string	getName();
		int	getExecGrade();
		int	getSignGrade();
		bool	getIsSigned();

		void	beSigned(Bureaucrat& Crat);

		class	GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class	AlreadySigned: public std::exception
		{
			virtual const char* what() const throw();
		};

};

std::ostream &operator<<(std::ostream &stream, const Form &Form);