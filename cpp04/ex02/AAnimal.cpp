#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called" << std::endl;
	_type = "AAnimal";
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "AAnimal type constructor called" << std::endl;
	this->_type = type;
}

AAnimal::AAnimal(const AAnimal& og)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = og;
}

AAnimal& AAnimal::operator=(const AAnimal& og)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this != &og)
		this->_type = og._type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal default destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->_type;
}