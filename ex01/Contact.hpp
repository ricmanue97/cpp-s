/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:57:05 by ricmanue          #+#    #+#             */
/*   Updated: 2025/07/18 16:44:10 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>


# define SUCCESS 0
# define UNSUCCESS -1
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RST "\033[0m"

class Contact
{
	private :
			std::string FirstName;
			std::string LastName;
			std::string NickName;
			std::string PhoneNumber;
			std::string DarkestSecret;
	public :
			void	addName();
			void	addLastName();
			void	addNickname();
			void	addPhoneNumber();
			void	addDarkestSecret();
			void	displayLine();
			void	displayContact();
			int		isEmpty();
};

#endif