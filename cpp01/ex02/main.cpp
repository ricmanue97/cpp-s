/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:24:06 by ricmanue          #+#    #+#             */
/*   Updated: 2025/09/04 13:37:56 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	std::string phrase;
	std::string *stringPTR;
	std::string &stringREF = phrase;

	phrase = "HI THIS IS BRAIN";
	stringPTR = &phrase;
	stringREF = phrase;

	std::cout << "This is the  memory address of the string variable ->" << &phrase << std::endl;
	std::cout << "This is the memory address held by stringPTR ->" << stringPTR << std::endl;
	std::cout << "This is the memory address held by stringREF ->" << &stringREF << std::endl;

	std::cout << "The value of the string variable ->" << phrase << std::endl;
	std::cout << "The value pointed to by stringPTR ->" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF ->" << stringREF << std::endl;

	return (0);
}