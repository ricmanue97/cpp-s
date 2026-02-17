
#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class AForm;


class Intern
{
	public:
		Intern();
		Intern(const Intern& og);

		AForm	*makeForm(std::string form, std::string target);

		Intern&	operator=(const Intern& og);
		~Intern();


};
