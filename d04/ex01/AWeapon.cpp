#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : 
		_name(name),
		_damage(damage),
		_APCost(apcost) {
}

AWeapon::AWeapon(AWeapon const &rfs) {
	*this = rfs;
}

AWeapon::~AWeapon() {}

AWeapon 	&AWeapon::operator=(AWeapon const &rfs) {
	this->_name = rfs._name;
	this->_damage = rfs._damage;
	this->_APCost = rfs._APCost;
	return *this;
}

std::string 	AWeapon::getName() const {
	return this->_name;
}

int 			AWeapon::getAPCost() const {
	return this->_APCost;
}

int 			AWeapon::getDamage() const {
	return this->_damage;
}
