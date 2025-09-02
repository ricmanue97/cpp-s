
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Name Constructor called" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& og)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &og)
	{
		this->_name = og._name;
		this->_hitPoints = og._hitPoints;
		this->_energyPoints = og._energyPoints;
		this->_attackDamage = og._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default Destructor called" << std::endl;
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints()
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints()
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage()
{
	return (this->_attackDamage);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_hitPoints)
	{
		std::cout << this->_name << ": DeAddd NOOise E e sSSs, can not attack..." << std::endl;
		return ;
	}
	else if (!this->_energyPoints)
	{
		std::cout << this->_name << ": tooo weakkkk, braaa... no enrgy..." << std::endl;
		return ;
	}

	std::cout << this->_name << "attacked " << target << " for " << this->_attackDamage << " damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hitPoints)
	{
		std::cout << this->_name << ": stop attacking, i'm alredy dead!!!" << std::endl;
		return ;
	}

	if (int(_hitPoints - amount) <= 0)
	{
		std::cout << this->_name << ": got destroyed, what a BLOW. He deeeeeeaaaad!!!" << std::endl;
		this->_hitPoints = 0;
		return ;
	}
	else
	{
		std::cout << this->_name << ": just took a blow and lost " << amount << " hit points!!" << std::endl;
		this->_hitPoints--;
		return ;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hitPoints)
	{
		std::cout << this->_name << ": can not heal, already deaaa...!!!" << std::endl;
		return ;
	}
	else if (!this->_energyPoints)
	{
		std::cout << this->_name << ": tooo weakkkk, braaa... no enrgy... can't heal..." << std::endl;
		return ;
	}

	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "*breath of relief* " << this->_name << " just healed " << amount << " of hit points!!!" << std::endl;

}
