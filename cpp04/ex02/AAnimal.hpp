

#pragma once

#include <string>
#include <iostream>

class AAnimal
{
	protected:
		std::string _type;
		
	public:
		AAnimal();
		AAnimal(const AAnimal& other);
		AAnimal(std::string type);
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal();

		std::string getType() const;
		virtual void makeSound() const = 0;
};