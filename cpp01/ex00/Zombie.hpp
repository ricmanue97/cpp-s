/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:38:47 by ricmanue          #+#    #+#             */
/*   Updated: 2025/07/23 10:41:40 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>


class Zombie
{
	private:
			std::string _name;
	public :
			Zombie(std::string name);
			~Zombie();
			void announce(void);
};

Zombie	*newZombie(std::string name);

#endif