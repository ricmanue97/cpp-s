/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:47:32 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/07 13:51:59 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
			std::string _name;
			Weapon &_Weapon;


	public:
			HumanA(std::string name, Weapon &Weapon);
			~HumanA();
			void attack();
			void setWeapon(Weapon &Weapon);

};

#endif