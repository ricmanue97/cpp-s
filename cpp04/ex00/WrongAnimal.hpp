
#pragma once

#include <iostream>
#include <iomanip>
#include <string>



class WrongAnimal
{

	protected:
			std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& og);
		WrongAnimal&	operator=(const WrongAnimal& og);
		~WrongAnimal();

		std::string getType()const;
		void	makeSound()const;
};
