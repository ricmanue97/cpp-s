
#include "Intern.hpp"


Intern::Intern()
{

}


Intern::Intern(const Intern& og)
{
	*this = og;
}


AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string Forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm" };

	int i = 0;

	while (i < 3 && name != Forms[i])
		i++;

	AForm *form = NULL;

	switch (i)
	{
		case 0:
		{
			form = new PresidentialPardonForm(target);
			std::cout << "PresidentialPardonForm created." << std::endl;
			break ;
		}
		case 1:
		{
			form = new RobotomyRequestForm(target);
			std::cout << "RobotomyRequestForm created." << std::endl;
			break ;
		}
		case 2:
		{
			form = new ShrubberyCreationForm(target);
			std::cout << "ShrubberyCreationForm created." << std::endl;
			break ;
		}
		case 3:
			std::cout << "I can not find " << name << "."<< std::endl;

	}
	return (form);
}

Intern&	Intern::operator=(const Intern& og)
{
	(void) og;
	return (*this);
}

Intern::~Intern()
{

}