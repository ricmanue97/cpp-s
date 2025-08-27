#include "Fixed.hpp"

FixedPoint::FixedPoint() : Fpoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

FixedPoint::FixedPoint( const FixedPoint &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

FixedPoint::FixedPoint(const float FloatValue)
{
	std::cout << "Float constructor called" << std::endl;
	Fpoint = roundf(FloatValue * (1 << Bits));
}

FixedPoint::FixedPoint(const int IntValue)
{
	std::cout << "Int constructor called" << std::endl;
	Fpoint = IntValue << Bits;
}

FixedPoint& FixedPoint::operator=(const FixedPoint& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		Fpoint = copy.Fpoint;
	return (*this);
}

std::ostream& operator<<(std::ostream &out, const FixedPoint& value)
{
	out << value.toFloat();
	return (out);
}

FixedPoint::~FixedPoint()
{
	std::cout << "Destructor called" << std::endl;
}

int FixedPoint::getRawBits()const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(Fpoint);
}

void FixedPoint::setRawBits(int const raw)
{
	Fpoint = raw;
}

float FixedPoint::toFloat()const
{
	return ((float)Fpoint / (1 << Bits));
}

int FixedPoint::toInt()const
{
	return (Fpoint >> Bits);
}
