
#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << " Default ScavTrap constructor" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_guard = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	std::cout << " ScavTrap name constructor" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_guard = false;
}

ScavTrap::ScavTrap(const ScavTrap& og)
{
	std::cout << "ScavTrap copy constructor" << std::endl;
	*this = og;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& og)
{
	if (this != &og)
		ClapTrap::operator=(og);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!this->_hitPoints)
	{
		std::cout << "ScavTrap " << this->_name << " : DeAddd NOOise E e sSSs, can not attack..." << std::endl;
		return ;
	}
	else if (!this->_energyPoints)
	{
		std::cout << "ScavTrap " << this->_name << " : tooo weakkkk, braaap... no enrgy..." << std::endl;
		return ;
	}

	std::cout << "ScavTrap " << this->_name << "attacked " << target << " for " << this->_attackDamage << " damage!" << std::endl;
	this->_energyPoints--;
}

void	ScavTrap::guardGate()
{
	if (!this->_hitPoints)
	{
		std::cout << "ScavTrap " << this->_name << " : DeAddd NOOise E e sSSs, can not guard..." << std::endl;
		return ;
	}
	else if (!this->_energyPoints)
	{
		std::cout << "ScavTrap " << this->_name << " : tooo weakkkk, braaap... no enrgy..." << std::endl;
		return ;
	}

	if (this->_guard == false)
	{
		std::cout << "ScavTrap " << this->_name << " : DEFENSE MODE... ACTIVATED!!!!!" << std::endl;
		this->_guard = true;
	}
	else if (this->_guard == true)
	{
		std::cout << "ScavTrap " << this->_name << " : *GRAAAAWWWWWW* ATTACK MODE... ACTIVATED!!!!!" << std::endl;
		this->_guard = false;
	}
	this->_energyPoints--;
}

