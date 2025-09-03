

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
	private:
			Brain* _brain;

	public:
			Cat();
			Cat(const Cat& og);
			Cat& operator=(const Cat& og);
			~Cat();

			void	makeSound()const;

};