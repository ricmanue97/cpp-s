/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:53:24 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/28 10:26:53 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


class Fixed
{

	private:
			int _Fpoint;
			static const int _Bits = 8;

	public:
			Fixed();
			Fixed(const float FloatValue);
			Fixed(const int IntValue);
			Fixed(const Fixed& copy);
			Fixed& operator=(const Fixed& copy);
			~Fixed();
			int getRawBits()const;
			void setRawBits(int const raw);
			float toFloat()const;
			int toInt()const;
};

std::ostream& operator<<(std::ostream &out, const Fixed& value);

#endif