
#pragma once

#include <iostream>
#include <iomanip>
#include <string>



class Animal
{

	protected:
			std::string _type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& og);
		Animal&	operator=(const Animal& og);
		virtual ~Animal();

		std::string getType()const;
		virtual void	makeSound()const;
};
