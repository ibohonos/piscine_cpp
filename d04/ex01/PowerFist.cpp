#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}

PowerFist	&PowerFist::operator=( PowerFist const &rfs )
{
	this->_name = rfs._name;
	this->_damage = rfs._damage;
	this->_apcost = rfs._apcost;
	return *this;
}

PowerFist::PowerFist(PowerFist const &rfs) : AWeapon(rfs)
{
	*this = rfs;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

