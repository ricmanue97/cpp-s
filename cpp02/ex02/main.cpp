
#include "Fixed.hpp"

/* int main()
{
	Fixed a;                    // default
	Fixed b(10);                // int constructor
	Fixed c(10.5f);             // float constructor
	Fixed d(b);                 // copy ctor
	a = Fixed(9.75f);           // assignment from temporary

	std::cout << std::boolalpha << std::endl;

	std::cout << "Values (as float):" << std::endl;
	std::cout << "a = " << a << "  (toInt: " << a.toInt() << ")" << std::endl;
	std::cout << "b = " << b << "  (toInt: " << b.toInt() << ")" << std::endl;
	std::cout << "c = " << c << "  (toInt: " << c.toInt() << ")" << std::endl;
	std::cout << "d = " << d << "  (toInt: " << d.toInt() << ")" << std::endl << std::endl;

	std::cout << "Comparisons:" << std::endl;
	std::cout << "a >  b: " << (a > b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <  b: " << (a < b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "b == d: " << (b == d) << std::endl;
	std::cout << "b != c: " << (b != c) << std::endl << std::endl;

	// additional checks with equal values
	Fixed e(10);
	std::cout << "b == e: " << (b == e) << "  (b: " << b << ", e: " << e << ")" << std::endl;
	std::cout << "c >  e: " << (c > e) << "  (c: " << c << ", e: " << e << ")" << std::endl;

	return 0;
} */

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );


	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;


	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}