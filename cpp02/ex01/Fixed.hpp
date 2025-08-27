/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:53:24 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/27 14:44:27 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


class FixedPoint
{

	private:
			int Fpoint;
			static const int Bits = 8;

	public:
			FixedPoint();
			FixedPoint(const float FloatValue);
			FixedPoint(const int IntValue);
			FixedPoint(const FixedPoint& copy);
			FixedPoint& operator=(const FixedPoint& copy);
			~FixedPoint();
			int getRawBits()const;
			void setRawBits(int const raw);
			float toFloat()const;
			int toInt()const;
};

std::ostream& operator<<(std::ostream &out, const FixedPoint& value);

#endif