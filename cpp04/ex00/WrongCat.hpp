

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{

	public:
			WrongCat();
			WrongCat(const WrongCat& og);
			WrongCat& operator=(const WrongCat& og);
			~WrongCat();

			void	makeSound()const;

};


