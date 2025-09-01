/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:23:27 by ricmanue          #+#    #+#             */
/*   Updated: 2025/09/01 10:45:55 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _Weapon(weapon)
{
	std::cout << "HumanA Constructur has been called" << std::endl << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor has been called" << std::endl << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " atacks with their weapon " << _Weapon.getType() << std::endl << std::endl;
}