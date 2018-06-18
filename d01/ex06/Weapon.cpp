#include "Weapon.hpp"

Weapon::Weapon(std::string tp) : type(tp) {}

Weapon::~Weapon(void) {}

const std::string	&Weapon::getType(void) const {
	return (this->type);
}

void				Weapon::setType(std::string tp) {
	this->type = tp;
}
