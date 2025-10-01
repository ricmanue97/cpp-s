

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constrcutor called" << std::endl;
}

Cat::Cat(const Cat& og)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = og;
}

Cat& Cat::operator=(const Cat& og)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &og)
		this->_type = og._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}

void	Cat::makeSound()const
{
	std::cout << "Miau Miau" << std::endl;
}