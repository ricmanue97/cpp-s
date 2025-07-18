/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:05:20 by ricmanue          #+#    #+#             */
/*   Updated: 2025/07/18 16:56:09 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::addName()
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
			std::cout << RED << "Invalid name. Please use letters only: " << RST;
	}
	this->FirstName = name;
}

void	Contact::addLastName()
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
			std::cout << RED << "Invalid name. Please use letters only: " << RST << std::endl;
	}
	this->LastName = name;
}

void	Contact::addNickname()
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
				std::cout << RED <<"Invalid characters for nickname, try again!" << RST << std::endl;
				valid = false;
				break ;
			}
			else
				valid = true;
		}
		this->NickName = name;
	}
}

void	Contact::addPhoneNumber()
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
			std::cout << RED << "Invalid phone number, try again." << RST << std::endl;
		else
			flag = 1;
	}
	this->PhoneNumber = number;
}

void	Contact::addDarkestSecret()
{
	std::string secret;

	getline(std::cin, secret);
	if (!std::cin)
		return ;
	this->DarkestSecret = secret;
}

void	Contact::displayLine()
{
	std::string arr[] = {FirstName, LastName, NickName, ""};

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
	if (FirstName.empty())
		return (1);
	return (0);
}

void	Contact::displayContact()
{
	std::cout << "First name: " << FirstName << std::endl;
	std::cout << "Last name: " << LastName << std::endl;
	std::cout << "Nickname: " << NickName << std::endl;
	std::cout << "Phonenumber: " << PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << DarkestSecret << std::endl;
}
