#include "AWeapon.hpp"

AWeapon::AWeapon(){}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_damage = damage;
	this->_apcost = apcost;
}

AWeapon::~AWeapon() {}

AWeapon	&AWeapon::operator=( AWeapon const &rfs )
{
	this->_name = rfs._name;
	this->_damage = rfs._damage;
	this->_apcost = rfs._apcost;
	return *this;
}

AWeapon::AWeapon(AWeapon const &rfs)
{
	*this = rfs;
}

std::string	AWeapon::getName() const
{
	return(this->_name);
}

int	AWeapon::getAPCost() const
{
	return(this->_apcost);
}

int	AWeapon::getDamage() const
{
	return(this->_damage);
}
