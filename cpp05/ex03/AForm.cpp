
#include "AForm.hpp"


AForm::AForm() : _name("Default"), _gradeSign(150), _gradeExec(150)
{
	// std::cout << "Default Constructor called." << std::endl;
}

AForm::AForm(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	// std::cout << "Costum Constructor called." << std::endl;
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& og) : _name(og._name), _gradeSign(og._gradeSign), _gradeExec(og._gradeExec)
{
	// std::cout << "Copy Constructor called." << std::endl;
	*this = og;
}

AForm&	AForm::operator=(const AForm& og)
{
	// std::cout << "Assignment operator overload called." << std::endl;
	if (this != &og)
		this->_isSigned = og._isSigned;
	return (*this);
}
AForm::~AForm()
{
	std::cout << "Default destructor called." << std::endl;
}

std::string	AForm::getName() const
{
	return (this->_name);
}

int	AForm::getSignGrade() const
{
	return (this->_gradeSign);
}

int	AForm::getExecGrade() const
{
	return (this->_gradeExec);
}

bool	AForm::getIsSigned() const
{
	return (this->_isSigned);
}

void	AForm::beSigned(Bureaucrat& Crat)
{
	if (_isSigned)
		throw AlreadySignedException();
	if (Crat.getGrade() > _gradeSign)
		throw Bureaucrat::GradeTooLowException();
	_isSigned = true;
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (_isSigned == false)
		throw NotSignedException();
	else if (executor.getGrade() > _gradeExec)
		throw Bureaucrat::GradeTooLowException();

	action();
}

std::ostream	&operator<<(std::ostream &out, const AForm &form)
{
	out<<form.getName()<<", signed : "<<form.getIsSigned()<<std::endl;
	out<<form.getName()<<", grade to sign : "<<form.getSignGrade()<<std::endl;
	out<<form.getName()<<", grade to execute : "<<form.getExecGrade();
	return (out);
}


const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("AForm's grade is too high");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("AForm's grade is too low");
}

const char*	AForm::AlreadySignedException::what() const throw()
{
	return ("Form's already signed");
}

const char*	AForm::NotSignedException::what() const throw()
{
	return ("Form's not signed");
}
