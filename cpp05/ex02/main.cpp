#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	bob("Bob", 150);
	Bureaucrat	general("General", 1);
	ShrubberyCreationForm	shrubbery("Karen");
	RobotomyRequestForm		robotomy("another Karen");
	PresidentialPardonForm	pardon("Harl");

	std::cout<<bob<<std::endl;
	std::cout<<general<<std::endl<<std::endl;
	std::cout<<shrubbery<<std::endl<<std::endl;
	std::cout<<robotomy<<std::endl<<std::endl;
	std::cout<<pardon<<std::endl<<std::endl;

	bob.signForm(shrubbery);
	general.executeForm(shrubbery);
	general.signForm(shrubbery);
	bob.executeForm(shrubbery);
	general.executeForm(shrubbery);
	std::cout<<std::endl;

	bob.signForm(robotomy);
	general.executeForm(robotomy);
	general.signForm(robotomy);
	bob.executeForm(robotomy);
	general.executeForm(robotomy);
	general.executeForm(robotomy);
	general.executeForm(robotomy);
	general.executeForm(robotomy);
	std::cout<<std::endl;

	bob.signForm(pardon);
	general.executeForm(pardon);
	general.signForm(pardon);
	bob.executeForm(pardon);
	general.executeForm(pardon);

	return (0);
}