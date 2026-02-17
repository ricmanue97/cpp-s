
#include "Form.hpp"
#include "Bureaucrat.hpp"

void	test1()
{
	std::cout << "\n==========| TEST 1 |==========\n\n";
	try {
		Bureaucrat guy("Guy", 4);
		std::cout << "Bureaucrat " << guy.getName() << " has a valid grade -> " << guy.getGrade() << ", accepted!" << std::endl;
		guy.incrementGrade();
		guy.incrementGrade();
		guy.incrementGrade();
		guy.incrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cout << "Constructor exception (Guy): " << e.what() << std::endl;
	}

	try {
		Bureaucrat dennis("Dennis", -5);
		std::cout << "Bureaucrat Dennis has a valid grade -> -5, accepted!" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Constructor exception (Dennis): " << e.what() << std::endl;
	}

	try {
		Bureaucrat tony("Tony", 149);
		std::cout << "Bureaucrat " << tony.getName() << " has a valid grade -> " << tony.getGrade() << ", accepted!" << std::endl;
		tony.decrementGrade();
		tony.decrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cout << "Constructor exception (Tony): " << e.what() << std::endl;
	}

	try {
		Bureaucrat van_damme("Van Damme", 174);
		std::cout << "Bureaucrat Van Damme has a valid grade -> 174, accepted!" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Constructor exception (Van Damme): " << e.what() << std::endl;
	}
}

void	test2()
{
	std::cout << "\n==========| TEST 2 |==========\n\n";
	Bureaucrat phill("Phill", 42);

	std::cout << "This is " << phill;
}

void	test3()
{
	std::cout << "\n==========| TEST 3 |==========\n\n";
	Bureaucrat xico("Xico", 4);
	Bureaucrat tony("Tony", 56);
	Form build("Building Autorization", 7, 2);
	Form demolition("Demolition Autorization", 55, 55);

	std::cout << std::endl;

	try {
		xico.signForm(build);
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception during xico.signForm(build): " << e.what() << std::endl;
	}
	try {
		xico.signForm(build);
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception during xico.signForm(build): " << e.what() << std::endl;
	}
	try {
		tony.signForm(demolition);
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception during tony.signForm(demolition): " << e.what() << std::endl;
	}
	tony.incrementGrade();
	try {
		tony.signForm(demolition);
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception during tony.signForm(demolition): " << e.what() << std::endl;
	}
}

int	main()
{
	test1();
	test2();
	test3();
}