#include "Peon.hpp"

Peon::Peon(void) {}

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &rfs) : Victim(rfs) {
	*this = rfs;
	std::cout << "Zog zog." << std::endl;
}
Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
}

Peon	&Peon::operator=( Peon const &rfs ) {
	this->_name = rfs._name;
	return *this;
}

void	Peon::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
