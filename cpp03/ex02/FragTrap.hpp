
#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap& og);
			FragTrap&	operator=(const FragTrap& og);
			~FragTrap();

			void	attack(const std::string& target);
			void	highFivesGuys();

};