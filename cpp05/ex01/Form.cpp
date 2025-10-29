
#include "Form.hpp"


Form::Form() : _name("Default"), _gradeSign(150), _gradeExec(150)
{
	// std::cout << "Default Constructor called." << std::endl;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _isSigned(false)
{
	// std::cout << "Costum Constructor called." << std::endl;
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& og) : _name(og._name), _gradeSign(og._gradeSign), _gradeExec(og._gradeExec)
{
	// std::cout << "Copy Constructor called." << std::endl;
	*this = og;
}

Form&	Form::operator=(const Form& og)
{
	// std::cout << "Assignment operator overload called." << std::endl;
	if (this != &og)
		this->_isSigned = og._isSigned;
	return (*this);
}
Form::~Form()
{
	std::cout << "Default destructor called." << std::endl;
}

std::string	Form::getName()
{
	return (this->_name);
}

int	Form::getSignGrade()
{
	return (this->_gradeSign);
}

int	Form::getExecGrade()
{
	return (this->_gradeExec);
}

bool	Form::getIsSigned()
{
	return (this->_isSigned);
}

void	Form::beSigned(Bureaucrat& Crat)
{
	if (_isSigned)
		throw AlreadySigned();
	if (Crat.getGrade() > _gradeSign)
		throw Bureaucrat::GradeTooLowException();
	_isSigned = true;
}
