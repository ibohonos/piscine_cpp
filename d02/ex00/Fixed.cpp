#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=( Fixed const &rfs ) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rfs)
		this->_value = rfs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rfs) {
	o << rfs.getRawBits();
	return (o);
}
