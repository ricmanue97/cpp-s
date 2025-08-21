/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:07:18 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/21 13:29:24 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"


std::string	write_line(std::string line, std::string find, std::string replace)
{
	size_t position = 0, len = find.length() ;

	while ((position = line.find(find)) != std::string::npos)
	{
		line.erase(position, len);
		line.insert(position, replace);
		position += replace.length();
	}
	return (line);
}

int main(int ac, char **av)
{
	(void) ac;
	std::ifstream File(av[1]);
	std::ofstream Replaced ("replaced.txt");
	std::string line;

	if (ac != 4)
		std::cout << "Inputs should be name file -> string to find -> string to replace" << std::endl;
	else
	{
		if (!File.is_open())
		{
			std::cout << "Failed to open the file for reading!" << std::endl;
			return (1);
		}
		else if (!File.good())
		{
			std::cout << "Filestream is not good for reading!" << std::endl;
			return (1);
		}
		if (av[2][0])
		{
			while (getline(File, line))
			{
				line = write_line(line, av[2], av[3]);
				Replaced << line << "\n";
			}
		}
		else
		{
			while (getline(File, line))
				Replaced << line << "\n";
		}
	}
	File.close();
	return 0;
}