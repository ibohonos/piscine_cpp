#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _wpn(club) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with his " << (this->_wpn).type << std::endl;
}
