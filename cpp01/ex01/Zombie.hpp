/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:31:54 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/06 08:58:18 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>


class Zombie
{
	private:
			std::string _name;
	public :
			Zombie();
			~Zombie();
			Zombie(std::string name);
			void announce();
			void set_Name(std::string name);
};

Zombie	*newZombie(std::string name);
Zombie	*zombieHorde( int N, std::string name );

#endif