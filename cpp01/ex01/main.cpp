/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:01:14 by ricmanue          #+#    #+#             */
/*   Updated: 2025/09/04 13:23:43 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int num_zombies;
	std::string name;

	name = "Gilberto";
	num_zombies = 10;

	Zombie *horde = zombieHorde(num_zombies, name);

	for (int i = 0; i < num_zombies; i++)
		horde[i].announce();

	delete[]horde;
	return (0);
}