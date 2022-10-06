#include "Fixed.hpp"

Fixed::Fixed() :
		_fixpoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& Src) :
		_fixpoint(Src._fixpoint)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed&Rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &Rhs)
	{
		_fixpoint = Rhs._fixpoint;
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixpoint);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixpoint = raw;
}
