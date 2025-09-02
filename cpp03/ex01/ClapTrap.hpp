
#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class ClapTrap
{

	protected:
			std::string		_name;
			unsigned int	_hitPoints;
			unsigned int	_energyPoints;
			unsigned int	_attackDamage;

	public:
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& og);
			ClapTrap&	operator=(const ClapTrap& og);
			~ClapTrap();

			std::string		getName();
			unsigned int	getHitPoints();
			unsigned int	getEnergyPoints();
			unsigned int	getAttackDamage();

			void			attack(const std::string& target);
			void			takeDamage(unsigned int amount);
			void			beRepaired(unsigned int amount);

};
