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

		try {
			bob.signForm(shrubbery);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.executeForm(shrubbery);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.signForm(shrubbery);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			bob.executeForm(shrubbery);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.executeForm(shrubbery);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout<<std::endl;

		try {
			bob.signForm(robotomy);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.executeForm(robotomy);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.signForm(robotomy);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			bob.executeForm(robotomy);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.executeForm(robotomy);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.executeForm(robotomy);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.executeForm(robotomy);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.executeForm(robotomy);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout<<std::endl;

		try {
			bob.signForm(pardon);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.executeForm(pardon);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.signForm(pardon);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			bob.executeForm(pardon);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			general.executeForm(pardon);
		} catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}

	       return (0);
}