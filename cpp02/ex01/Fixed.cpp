/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:53:35 by ricmanue          #+#    #+#             */
/*   Updated: 2025/08/28 10:26:53 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _Fpoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const float FloatValue)
{
	std::cout << "Float constructor called" << std::endl;
	_Fpoint = roundf(FloatValue * (1 << _Bits));
}

Fixed::Fixed(const int IntValue)
{
	std::cout << "Int constructor called" << std::endl;
	_Fpoint = IntValue << _Bits;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		_Fpoint = copy._Fpoint;
	return (*this);
}

std::ostream& operator<<(std::ostream &out, const Fixed& value)
{
	out << value.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_Fpoint);
}

void Fixed::setRawBits(int const raw)
{
	_Fpoint = raw;
}

float Fixed::toFloat()const
{
	return ((float)_Fpoint / (1 << _Bits));
}

int Fixed::toInt()const
{
	return (_Fpoint >> _Bits);
}
