/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:14:42 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/19 11:50:11 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Input only one level dummy!!!!" << std::endl;
		return (1);
	}

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int type;
	Harl harl;

	for (size_t i = 0; i < 4; i++)
	{
		if (av[1] == levels[i])
		{
			type = i;
			break;
		}
		else
			type = 4;
	}
	switch (type)
	{
		case 0:
				harl.complain("DEBUG");
		case 1:
				harl.complain("INFO");
		case 2:
				harl.complain("WARNING");
		case 3:
				harl.complain("ERROR");
				break;
		case 4:
				std::cout << "CHOOSE A VALID LEVEL DUMMY!!!!!!" << std::endl;
				break;
	}
}