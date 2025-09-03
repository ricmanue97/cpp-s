
#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal type constructor called" << std::endl;
	this->_type = type;
}

Animal::Animal(const Animal& og)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = og;
}

Animal&	Animal::operator=(const Animal& og)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &og)
		this->_type = og._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

std::string Animal::getType()const
{
	return (this->_type);
}

void	Animal::makeSound()const
{
	std::cout << "Random and animalistic noises cocorocoauauauamiiaurawwwwr" << std::endl;
}