/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:23:34 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/07 13:53:59 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB Constructur has been called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor has been called" << std::endl;
}

void	HumanB::attack()
{
	if (_Weapon)
		std::cout << this->_name << " atacks with their weapon " << _Weapon->getType() << std::endl;
	else
		std::cout << "HumanB has no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_Weapon = &weapon;
}
