/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 10:30:10 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/28 10:26:53 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <string>


class Fixed
{

	private:
			int _Fpoint;
			const static int _Bits = 8;

	public:
			Fixed();
			Fixed(const Fixed& copy);
			Fixed& operator=(const Fixed& copy);
			~Fixed();
			int getRawBits()const;
			void setRawBits(int const raw);
};


#endif