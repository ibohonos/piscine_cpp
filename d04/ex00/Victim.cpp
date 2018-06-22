#include "Victim.hpp"

Victim::Victim(void) {}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &rfs) {
	*this = rfs;
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim	&Victim::operator=( Victim const &rfs ) {
	this->_name = rfs._name;
	return *this;
}

void	Victim::introduce(void) const {
	std::cout << "I am " << this->_name << " and I like otters !" << std::endl;
}

void 	Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::string	Victim::getName(void) const {
	return this->_name;
}

std::ostream 	&operator<<( std::ostream &o, Victim const &rfs ) {
	o << "I am " << rfs.getName() << " and I like otters !" << std::endl;;
	return o;
}
