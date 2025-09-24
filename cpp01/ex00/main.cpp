/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:38:36 by ricmanue          #+#    #+#             */
/*   Updated: 2025/09/04 13:21:37 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *newZombie1;

	newZombie1 = newZombie("New Zombie");
	newZombie1->announce();
	randomChump("Random Zombie");
	delete newZombie1;
	return (0);
}
