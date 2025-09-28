
#include "Cat.hpp"

Cat::Cat() :AAnimal()
{
	std::cout << "Cat default constrcutor called" << std::endl;
	_type = "Cat";
	_brain = new (Brain);
}

Cat::Cat(const Cat& og) : AAnimal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new (Brain);
	*this = og;
}

Cat& Cat::operator=(const Cat& og)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &og)
		this->_type = og._type;
	return (*this);
}

Brain* Cat::getBrain()const
{
	return (this->_brain);
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete (_brain);
}

void	Cat::makeSound()const
{
	std::cout << "Miau Miau" << std::endl;
}