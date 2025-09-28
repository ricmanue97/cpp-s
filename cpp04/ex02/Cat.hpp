

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat : public AAnimal
{
	private:
			Brain* _brain;

	public:
			Cat();
			Cat(const Cat& og);
			Cat& operator=(const Cat& og);
			~Cat();

			void	makeSound()const;
			Brain*	getBrain()const;

};