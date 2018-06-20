#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_bits;
}

Fixed::Fixed(float const n) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(n * (1 << this->_bits));
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rfs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rfs)
		this->_value = rfs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {
	return (this->_value);
}

float	Fixed::toFloat(void) const {
	float ret = this->_value;
	return (ret / (1 << this->_bits));
}

int		Fixed::toInt(void) const {
	return (this->_value >> this->_bits);
}

std::ostream 	&operator<<(std::ostream &o, Fixed const &rfs) {
	o << rfs.toFloat();
	return (o);
}
