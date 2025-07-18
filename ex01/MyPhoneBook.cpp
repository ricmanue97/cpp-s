/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:49:46 by ricmanue          #+#    #+#             */
/*   Updated: 2025/07/18 14:06:32 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void	PhoneBook::addContact()
{
	int j;
	int i;

	i = 6;
	j = 0;
	while (i >= 0)
	{
		contact[i + 1] = contact[i];
		i--;
	}
	i = 0;
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
	if (std::cin)
		std::cout << "Contact sucessfully added!!" << std::endl << std::endl << std::endl;
}

void	PhoneBook::searchContact()
{
	int	i;
	int flag;
	std::string index;

	flag = 0;
	if (contact[0].isEmpty() == 1)
	{
		std::cout << "Phonebook is empty DUM DUM!!" << std::endl ;
		return ;
	}
	std::cout << "Choose the Index of the contact you wish to see!" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;

	i = 0;

	while (i < 8 && !contact[i].isEmpty())
	{
		std::cout << "         " << i + 1 << "|";
		contact[i].displayLine();
		i++;
	}

	while (flag == 0)
	{
		getline(std::cin, index);
		if (!std::cin)
			return ;
		if (index.length() != 1 || !isdigit(index[0]))
		{
			std::cout << "Index is a number between 1 and 8, try again." << std::endl;
			continue ;
		}
		i = index[0] - 48;
		if (i < 1 || i > 8)
			std::cout << "Index is a number between 1 and 8, try again." << std::endl;
		else if (contact[i - 1].isEmpty())
			std::cout << "Index is not valid, try again." << std::endl;
		else
		{
			contact[i - 1].displayContact();
			flag = 1;
		}
	}
}