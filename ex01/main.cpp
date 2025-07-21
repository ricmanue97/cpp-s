/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 09:20:25 by ricmanue          #+#    #+#             */
/*   Updated: 2025/07/21 09:30:55 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string prompt;
	int	i;

	i = 8;
	std::cout << YELLOW << "Write ADD for new Contact and SEARCH to search for a contact:" << RST << std::endl;
	std::cout << YELLOW << "EXIT if you wish to close the PhoneBook:" << RST << std::endl;

	while (std::getline(std::cin, prompt) && ((prompt.compare("EXIT") != 0) || !std::cin))
	{
		if (prompt.compare("ADD") == 0)
		{
			phonebook.addContact();
		}
		else if (prompt.compare("SEARCH") == 0)
			phonebook.searchContact();
		else
		{
			std::cout << RED <<  "Invalid Command. Only ADD, SEARCH or EXIT" << RST <<  std::endl;
			continue;
		}
		if (std::cin)
			std::cout << YELLOW <<  "Write ADD for new Contact and SEARCH to search for a contact" << RST <<  std::endl;
	}
	return (0);
}