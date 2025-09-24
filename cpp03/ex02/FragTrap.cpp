
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << " Default FragTrap constructor" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	std::cout << " FragTrap name constructor" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& og)
{
	std::cout << "FragTrap copy constructor" << std::endl;
	*this = og;
}

FragTrap&	FragTrap::operator=(const FragTrap& og)
{
	if (this != &og)
		ClapTrap::operator=(og);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (!this->_hitPoints)
	{
		std::cout << "FragTrap " << this->_name << " : DeAddd NOOise E e sSSs, can not attack..." << std::endl;
		return ;
	}
	else if (!this->_energyPoints)
	{
		std::cout << "FragTrap " << this->_name << " : tooo weakkkk, braaap... no enrgy..." << std::endl;
		return ;
	}

	std::cout << "FragTrap " << this->_name << "attacked " << target << " for " << this->_attackDamage << " damage!" << std::endl;
	this->_energyPoints--;
}

void	FragTrap::highFivesGuys()
{
	if (!this->_hitPoints)
	{
		std::cout << "FragTrap " << this->_name << " : DeAddd NOOise E e sSSs, can not request high five..." << std::endl;
		return ;
	}
	else if (!this->_energyPoints)
	{
		std::cout << "FragTrap " << this->_name << " : tooo weakkkk, braaap... no enrgy..." << std::endl;
		return ;
	}

	std::cout << "FragTrap " << this->_name << " : I request a high five, pleaaase give me a high five!!!!" << std::endl;
	this->_energyPoints--;
}

