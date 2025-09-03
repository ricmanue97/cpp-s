

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
	private:
			Brain* _brain;

	public:
			Dog();
			Dog(const Dog& og);
			Dog& operator=(const Dog& og);
			~Dog();

			void	makeSound()const;

};