/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:14:38 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/18 11:18:12 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Harl
{
	private:
			void debug( void );
			void info( void );
			void warning( void );
			void error( void );

	public:
			Harl();
			~Harl();
			void complain( std::string level );

};

#endif