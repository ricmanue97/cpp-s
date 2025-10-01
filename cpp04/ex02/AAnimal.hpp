

#pragma once

#include <string>
#include <iostream>

class AAnimal
{
	protected:
		std::string _type;
		AAnimal();
		AAnimal(const AAnimal& other);
		AAnimal(std::string type);

	public:
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal();

		std::string getType() const;
		virtual void makeSound() const = 0;
};