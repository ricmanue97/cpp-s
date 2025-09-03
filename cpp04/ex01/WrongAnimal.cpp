
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal type constructor called" << std::endl;
	this->_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& og)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = og;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& og)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &og)
		this->_type = og._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

std::string WrongAnimal::getType()const
{
	return (this->_type);
}


void	WrongAnimal::makeSound()const
{
	std::cout << "Random and animalistic noises cocorocoauauauamiiaurawwwwr" << std::endl;
}