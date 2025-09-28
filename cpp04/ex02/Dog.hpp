

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"


class Dog : public AAnimal
{
	private:
			Brain* _brain;

	public:
			Dog();
			Dog(const Dog& og);
			Dog& operator=(const Dog& og);
			~Dog();

			Brain* getBrain()const;
			void	makeSound()const;

};