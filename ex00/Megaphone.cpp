/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:18:56 by ricmanue          #+#    #+#             */
/*   Updated: 2025/06/30 13:55:18 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int i = 0;
		while (av[++i])
		{
			int j = -1;
			while (av[i][++j])
			{
				if (isalpha(av[i][j]) != 0)
					av[i][j] = toupper(av[i][j]);
				std::cout << av[i][j];
			}
			std::cout << " ";
		}
	}
	std::cout << std::endl;
}

