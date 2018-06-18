#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &wpn) {
	this->_wpn = &wpn;
}

void	HumanB::attack(void) const {
	std::cout << this->_name << " attacks with his " << (this->_wpn)->type << std::endl;
}
