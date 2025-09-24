

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constrcutor called" << std::endl;
	_type = "Dog";
	_brain = new (Brain);
}

Dog::Dog(const Dog& og)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new (Brain);
	*this = og;
}

Dog& Dog::operator=(const Dog& og)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &og)
		this->_type = og._type;
	return (*this);
}

Brain* Dog::getBrain()const
{
	return (this->_brain);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete (_brain);
}

void	Dog::makeSound()const
{
	std::cout << "AUAUAUAUAUAU" << std::endl;
}