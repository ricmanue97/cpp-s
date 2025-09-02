

#pragma once

#include <iostream>
#include <iomanip>
#include <string>


class Animal
{

	protected:
			std::string type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& og);
		Animal&	operator=(const Animal& og);
		~Animal();

};
