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

Fixed& Fixed::operator=(const Fixed& og)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &og)
		_Fpoint = og._Fpoint;
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


bool Fixed::operator>(const Fixed& og)const
{
	if (this->getRawBits() > og.getRawBits())
		return(true);
	return(false);
}

bool Fixed::operator>=(const Fixed& og)const
{
	if (this->getRawBits() >= og.getRawBits())
		return(true);
	return(false);
}

bool Fixed::operator<(const Fixed& og)const
{
	if (this->getRawBits() < og.getRawBits())
		return(true);
	return(false);
}

bool Fixed::operator<=(const Fixed& og)const
{
	if (this->getRawBits() <= og.getRawBits())
		return(true);
	return(false);
}
bool Fixed::operator==(const Fixed& og)const
{
	if (this->getRawBits() == og.getRawBits())
		return(true);
	return(false);
}
bool Fixed::operator!=(const Fixed& og)const
{
	if (this->getRawBits() != og.getRawBits())
		return(true);
	return(false);
}

float Fixed::operator+(const Fixed& og)
{
	float rvalue = (float)this->getRawBits() + (float)og.getRawBits();
	return(rvalue);
}

float Fixed::operator-(const Fixed& og)
{
	float rvalue = (float)this->getRawBits() - (float)og.getRawBits();
	return(rvalue);
}

float Fixed::operator*(const Fixed& og)
{
	float rvalue = (float)this->getRawBits() * (float)og.getRawBits();
	return(rvalue);
}

float Fixed::operator/(const Fixed& og)
{
	float rvalue = (float)this->getRawBits() / (float)og.getRawBits();
	return(rvalue);
}

Fixed& Fixed::operator++()
{
	this->_Fpoint++;
	return(*this);
}

Fixed& Fixed::operator--()
{
	this->_Fpoint--;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	_Fpoint++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	_Fpoint--;
	return (tmp);
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
	if (first._Fpoint < second._Fpoint)
		return (first);
	else
		return (second);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first._Fpoint < second._Fpoint)
		return (first);
	else
		return (second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
	if (first._Fpoint > second._Fpoint)
		return (first);
	else
		return (second);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first._Fpoint > second._Fpoint)
		return (first);
	else
		return (second);
}

