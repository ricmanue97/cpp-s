
#include "Animal.hpp"



Animal::Animal()
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Type constructor called" << std::endl;
}

Animal::Animal(const Animal& og)
{

}

Animal&	Animal::operator=(const Animal& og)
{

}

Animal::~Animal()
{

}