#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <math.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExec;

	protected:
		AForm();
		AForm(const std::string name, const int gradeSign, const int gradeExec);
		AForm(const AForm& og);

	public:
		AForm&	operator=(const AForm& og);
		virtual ~AForm() = 0;

		std::string	getName() const;
		int	getExecGrade() const;
		int	getSignGrade() const;
		bool	getIsSigned() const;

		void	beSigned(Bureaucrat& Crat);
		void	execute(Bureaucrat const &executor) const;
		virtual void	action() const = 0;

		class	GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class	AlreadySignedException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class	NotSignedException: public std::exception
		{
			virtual const char* what() const throw();
		};

};

std::ostream &operator<<(std::ostream &stream, const AForm &Form);