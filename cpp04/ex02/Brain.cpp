
#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "This is an idea";
}

Brain::Brain(const Brain& og)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = og;
}

Brain& Brain::operator=(const Brain& og)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &og)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = og._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}
