#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &rfs) : AWeapon(rfs) {
	*this = rfs;
}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle 	&PlasmaRifle::operator=(PlasmaRifle const &rfs) {
	this->_name = rfs._name;
	this->_damage = rfs._damage;
	this->_APCost = rfs._APCost;
	return *this;
}

void 	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}