/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:47:06 by ricmanue          #+#    #+#             */
/*   Updated: 2025/09/04 14:03:37 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) :_type(type)
{
	std::cout << "Weapon Constructor has been called" << std::endl << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor has been called" << std::endl << std::endl;
}

const std::string &Weapon::getType()
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}