/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:57:05 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/29 13:52:58 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>


# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RST "\033[0m"

class Contact
{
	private :
			std::string firstName;
			std::string lastName;
			std::string nickName;
			std::string phoneNumber;
			std::string darkestSecret;
	public :
		Contact();
		~Contact();
			void	addName(int flag);
			void	addnickName();
			void	addphoneNumber();
			void	adddarkestSecret();
			void	displayLine();
			void	displayContact();
			int		isEmpty();
};

#endif