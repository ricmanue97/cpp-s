/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:49:46 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/29 13:52:58 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void	PhoneBook::addContact()
{
	static int i;

	std::cout << "Add First name:" << std::endl;
	contact[i].addName(1);
	if (!std::cin)
		return;

	std::cout << "Add Last name:" << std::endl;
	contact[i].addName(2);
	if (!std::cin)
		return;

	std::cout << "Add nickName:" << std::endl;
	contact[i].addnickName();
	if (!std::cin)
		return;

	std::cout << "Add Phone Number:" << std::endl;
	contact[i].addphoneNumber();
	if (!std::cin)
		return;

	std::cout << "Add Darkest Secret:" << std::endl;
	contact[i].adddarkestSecret();
	if (!std::cin)
		return;

	if (i == 7)
		i = 0;
	else
		i++;

	if (std::cin)
		std::cout << GREEN <<  "Contact sucessfully added!!" << RST <<  std::endl << std::endl << std::endl;
}

void	PhoneBook::searchContact()
{
	int	i;
	int flag;
	std::string index;

	flag = 0;
	if (contact[0].isEmpty() == 1)
	{
		std::cout << RED <<  "Phonebook is empty DUM DUM!!" << RST <<  std::endl ;
		return ;
	}
	std::cout << YELLOW <<  "Choose the Index of the contact you wish to see!" << RST << std::endl;
	std::cout << YELLOW <<  "-------------------------------------------" << RST << std::endl;
	std::cout << YELLOW <<  "     Index|First Name| Last Name|  nickName" << RST << std::endl;

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
			std::cout << RED <<  "Index is a number between 1 and 8, try again." << RST <<  std::endl;
			continue ;
		}
		i = index[0] - 48;
		if (i < 1 || i > 8)
			std::cout << RED <<  "Index is a number between 1 and 8, try again." << RST <<  std::endl;
		else if (contact[i - 1].isEmpty())
			std::cout << RED <<  "Index is not valid, try again." << RST <<  std::endl;
		else
		{
			contact[i - 1].displayContact();
			flag = 1;
		}
	}
}

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{

}