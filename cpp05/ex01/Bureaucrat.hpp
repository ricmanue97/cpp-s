
#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;


	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat& og);
		Bureaucrat&	operator=(const Bureaucrat& og);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;

		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form &form);

	class	GradeTooHighException: public std::exception
	{
		virtual const char* what() const throw();
	};
	class	GradeTooLowException: public std::exception
	{
		virtual const char* what() const throw();
	};



};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &Crat);