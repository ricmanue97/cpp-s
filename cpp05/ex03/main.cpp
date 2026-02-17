#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"


int main(void)
{
	Bureaucrat bob("Bob", 150);
	Bureaucrat general("General", 1);
	Intern someRandomIntern;

	std::cout << bob << std::endl;
	std::cout << general << std::endl << std::endl;

	// Test Intern creating forms
	AForm *form1 = someRandomIntern.makeForm("ShrubberyCreationForm", "Karen");
	AForm *form2 = someRandomIntern.makeForm("RobotomyRequestForm", "another Karen");
	AForm *form3 = someRandomIntern.makeForm("PresidentialPardonForm", "Harl");

	if (form1) std::cout << *form1 << std::endl;
	if (form2) std::cout << *form2 << std::endl;
	if (form3) std::cout << *form3 << std::endl;

	// Try signing and executing forms created by Intern
	if (form1) {
		try { bob.signForm(*form1); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
		try { general.signForm(*form1); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
		try { bob.executeForm(*form1); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
		try { general.executeForm(*form1); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
	}
	std::cout << std::endl;
	if (form2) {
		try { bob.signForm(*form2); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
		try { general.signForm(*form2); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
		try { bob.executeForm(*form2); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
		try { general.executeForm(*form2); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
	}
	std::cout << std::endl;
	if (form3) {
		try { bob.signForm(*form3); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
		try { general.signForm(*form3); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
		try { bob.executeForm(*form3); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
		try { general.executeForm(*form3); } catch (const std::exception &e) { std::cerr << "Exception: " << e.what() << std::endl; }
	}

	// Clean up
	delete form1;
	delete form2;
	delete form3;
	// form4 is always nullptr

	return 0;
}