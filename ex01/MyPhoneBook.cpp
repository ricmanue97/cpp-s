/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:49:46 by ricmanue          #+#    #+#             */
/*   Updated: 2025/07/17 15:24:34 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void	PhoneBook::addContact()
{
	int j;
	int i;

	i = 6;
	j = 0;
	while (i <= 6)
	{
		contact[i + 1] = contact[i];
		i--;
	}
	while (j < 5 && std::cin)
	{
		if (j == 0)
		{
			std::cout << "Add First name:" << std::endl;
			contact[i].addName();
		}
		else if (j == 1)
		{
			std::cout << "Add Last name:" << std::endl;
			contact[i].addLastName();
		}
		else if (j == 2)
		{
			std::cout << "Add nickname:" << std::endl;
			contact[i].addNickname();
		}
		else if (j == 3)
		{
			std::cout << "Add Phone Number:" << std::endl;
			contact[i].addPhoneNumber();
		}
		else if (j == 4)
		{
			std::cout << "Add Darkest Secret:" << std::endl;
			contact[i].addDarkestSecret();
		}
		j++;
	}
	std::cout << "Contact sucessfully added!!" << std::endl << std::endl << std::endl;
}

void	PhoneBook::searchContact()
{
	int	i;

	if (contact[0].isEmpty() == 1)
	{
		std::cout << "Phonebook is empty DUM DUM!!" << std::endl ;
		return ;
	}

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;

	i = 0;

	while (i < 8 && !contact[i].isEmpty())
	{
		std::cout << "         " << i + 1 << "|";
		contact[i].displayLine();
		i++;
	}
}