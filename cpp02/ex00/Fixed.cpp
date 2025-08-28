
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

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		_Fpoint = copy._Fpoint;
	return (*this);
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