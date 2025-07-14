/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:49:46 by ricmanue          #+#    #+#             */
/*   Updated: 2025/07/14 17:13:56 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void	PhoneBook::addContact(Contact &newContact)
{
	int i;

	i = 0;

	while (i < 5 && std::cin)
	{
		if (i == 0)
		{
			std::cout << "Add First name:" << std::endl;
			newContact.addName();
		}
		else if (i == 1)
		{
			std::cout << "Add Last name:" << std::endl;
		}
		else if (i == 2)
		{
			std::cout << "Add nickname:" << std::endl;
		}
		else if (i == 3)
		{
			std::cout << "Add Phone Number:" << std::endl;
		}
		else if (i == 4)
		{
			std::cout << "Add Darkest Secret:" << std::endl;
		}
		i++;
	}
}