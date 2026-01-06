#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	// std::cout << "Bureaucrat default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	// std::cout << "Bureaucrat custom constructor called." << std::endl;
	try
	{
		if (_grade < 1)
			throw GradeTooHighException();
		if (_grade > 150)
			throw GradeTooLowException();
		std::cout << "Bureaucrat " << _name << " has a valid grade -> "\
		 << _grade << ", accepted!" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Constructor exception (" << _name << "): "\
		 << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& og) : _name(og._name)
{
	// std::cout << "Copy constructor called." << std::endl;
	*this = og;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& og)
{
	// std::cout << "Copy assignment operator called." << std::endl;

	if (this != &og)
	{
		this->_grade = og._grade;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &Crat)
{
	stream  << Crat.getName() << ", bureaucrat grade " << Crat.getGrade() << std::endl;
	return (stream);

}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat default destructor called." << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.getIsSigned() == false)
	{
		form.beSigned(*this);

		if (form.getIsSigned() == true)
			std::cout << this->getName() << " signed " << form.getName() << std::endl;
		else
			std::cout << this->getName() << " couldn't sign " << form.getName() << " because bureucrat grade is to low" << std::endl;
	}
	else
		std::cout << "Couldn't sign because " << form.getName() << "is already signed " << std::endl;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat's grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat's grade is too low");
}
