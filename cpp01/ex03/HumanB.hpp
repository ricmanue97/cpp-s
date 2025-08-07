/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:22:35 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/07 13:52:05 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
			std::string _name;
			Weapon *_Weapon;


	public:
			HumanB(std::string name);
			~HumanB();
			void attack();
			void setWeapon(Weapon &Weapon);

};

#endif