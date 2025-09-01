/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:55:15 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/29 12:00:43 by ricmanue         ###   ########.fr       */
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
			Fixed& operator=(const Fixed& og);

			bool operator>(const Fixed& og)const;
			bool operator>=(const Fixed& og)const;
			bool operator<(const Fixed& og)const;
			bool operator<=(const Fixed& og)const;
			bool operator==(const Fixed& og)const;
			bool operator!=(const Fixed& og)const;

			Fixed operator+(const Fixed& og);
			Fixed operator-(const Fixed& og);
			Fixed operator*(const Fixed& og);
			Fixed operator/(const Fixed& og);

			Fixed& operator++();
			Fixed operator++(int);
			Fixed& operator--();
			Fixed operator--(int);

			~Fixed();

			int getRawBits()const;
			void setRawBits(int const raw);
			float toFloat()const;
			int toInt()const;

			static Fixed& min(Fixed& first, Fixed& second);
			static const Fixed& min(const Fixed& first, const Fixed& second);
			static Fixed& max(Fixed& first, Fixed& second);
			static const Fixed& max(const Fixed& first, const Fixed& second);


};

std::ostream& operator<<(std::ostream &out, const Fixed& value);

#endif