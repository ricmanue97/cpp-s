
#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	private:
			bool _guard;

	public:
			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap& og);
			ScavTrap&	operator=(const ScavTrap& og);
			~ScavTrap();

			void	attack(const std::string& target);
			void	guardGate();


};