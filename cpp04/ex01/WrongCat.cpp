
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constrcutor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& og)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = og;
}

WrongCat& WrongCat::operator=(const WrongCat& og)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &og)
		this->_type = og._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

void	WrongCat::makeSound()const
{
	std::cout << "Miau Miau" << std::endl;
}