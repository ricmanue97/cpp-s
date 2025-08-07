/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 09:31:45 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/07 13:50:25 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Weapon
{
	private:
			std::string _type;
	public :
			Weapon(std::string type);
			~Weapon();

			const std::string	&getType();
			void				setType(std::string type);

};

#endif
