/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:05:20 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/29 16:01:15 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::addName(int flag)
{
	std::string name;
	bool valid = false;

	while (!valid)
	{
		getline(std::cin, name);
		if (!std::cin)
			return ;
		valid = !name.empty();
		for (size_t i = 0; i < name.length() && valid; ++i)
		{
			if (!isalpha(name[i]))
				valid = false;
		}
		if (!valid)
			std::cout << RED << "Invalid name. Please use letters only, try again! " << RST << std::endl;
	}
	if (flag == 1)
		this->firstName = name;
	else
		this->lastName = name;
}

void	Contact::addnickName()
{
	std::string name;
	bool valid = false;

	while (!valid)
	{
		getline(std::cin, name);
		if (!std::cin)
			return ;
		for (size_t i = 0; i < name.length(); i++)
		{
			if (name[i] <= 33 || name[i] >= 127)
			{
				std::cout << RED <<"Invalid characters for nickName, try again!" << RST << std::endl;
				valid = false;
				break ;
			}
			else
				valid = true;
		}
		this->nickName = name;
	}
}

void	Contact::addphoneNumber()
{
	std::string number;
	int	flag;

	flag = 0;
	while (flag == 0)
	{
		getline(std::cin, number);
		if (!std::cin)
			return;
		if (!isdigit(number[0]))
			number = "";
		for (int i = 1; number[i]; i++)
		{
			if (!isdigit(number[i]))
				number = "";
		}
		if (number == "")
			std::cout << RED << "Invalid phone number, try again!" << RST << std::endl;
		else
			flag = 1;
	}
	this->phoneNumber = number;
}

void	Contact::adddarkestSecret()
{
	std::string secret;

	getline(std::cin, secret);
	if (!std::cin)
		return ;
	this->darkestSecret = secret;
}

void	Contact::displayLine()
{
	std::string arr[] = {firstName, lastName, nickName, ""};

	for (int i = 0; !arr[i].empty(); i++)
	{
		if (arr[i].length() <= 10)
			std::cout <<  std::setw(10) << arr[i].substr(0, 10) << "|";
		else
			std::cout << arr[i].substr(0, 9) << ".|";
	}
	std::cout << std::endl;
}

int	Contact::isEmpty()
{
	if (firstName.empty())
		return (1);
	return (0);
}

void	Contact::displayContact()
{
	std::cout << YELLOW << "First name: " << firstName << RST <<  std::endl;
	std::cout << YELLOW << "Last name: " << lastName << RST <<  std::endl;
	std::cout << YELLOW << "nickName: " << nickName << RST <<  std::endl;
	std::cout << YELLOW << "phoneNumber: " << phoneNumber << RST <<  std::endl;
	std::cout << YELLOW << "Darkest Secret: " << darkestSecret << RST <<  std::endl;
}

Contact::Contact()
{

}

Contact::~Contact()
{

}