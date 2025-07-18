/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:28:24 by ricmanue          #+#    #+#             */
/*   Updated: 2025/07/18 16:44:02 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"


# define SUCCESS 0
# define UNSUCCESS -1

class PhoneBook
{
	private :
			Contact contact[8];
	public :
		void	addContact();
		void	searchContact();

};

#endif