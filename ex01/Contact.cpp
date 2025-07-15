/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:05:20 by ricmanue          #+#    #+#             */
/*   Updated: 2025/07/15 10:17:06 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::addName()
{
	std::string name;

	getline(std::cin, name);

	this->FirstName = name;
}

void	Contact::addLastName()
{
	std::string name;

	getline(std::cin, name);

	this->LastName = name;
}

void	Contact::addNickname()
{
	std::string name;

	getline(std::cin, name);

	this->NickName = name;
}

void	Contact::addPhoneNumber()
{
	std::string number;
	int	flag;

	flag = 0;
	if (!std::cin)
		return;
	while (flag == 0)
	{
		getline(std::cin, number);
		if (!isdigit(number[0]))
			number = "";
		for (int i = 1; number[i]; i++)
		{
			if (!isdigit(number[i]))
				number = "";
		}
		if (number == "")
			std::cout << "Invalid phone number, try again." << std::endl;
		else
			flag = 1;
	}
	this->PhoneNumber = number;
}

void	Contact::addDarkestSecret()
{
	std::string secret;

	getline(std::cin, secret);

	this->DarkestSecret = secret;
}