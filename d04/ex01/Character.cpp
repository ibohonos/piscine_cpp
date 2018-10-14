#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->_name = name;
	this->_ap = 40;
	this->_wpn = NULL;
}

Character::Character(){}

Character::~Character() {}

Character	&Character::operator=( Character const &rfs )
{
	this->_ap = rfs._ap;
	this->_name = rfs._name;
	this->_wpn = rfs._wpn;
	return *this;
}

Character::Character(Character const &rfs)
{
	*this = rfs;
}

void	Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

std::string		Character::getName() const {
	return this->_name;
}

int			Character::getAP() const {
	return this->_ap;
}

std::string		Character::getWpnName() const {
	return this->_wpn->getName();
}

AWeapon		*Character::getWpn() const {
	return this->_wpn;
}

void	Character::attack(Enemy* enemy)
{
	int   ap_cost;

	if (this->_wpn != NULL && enemy != NULL)
	{
		ap_cost = this->_wpn->getAPCost();
		if (this->_ap - ap_cost >= 0)
		{
			std::cout << this->_name << " attacks " << enemy->getType() \
		        << "with a " << this->_wpn->getName() << std::endl;
			this->_wpn->attack();
		    enemy->takeDamage(this->_wpn->getDamage());
		    if (enemy->getHP() <= 0)
		        delete enemy;
		    this->_ap -= ap_cost;
		}

	}
}

void 	Character::equip(AWeapon *wpn)
{
	this->_wpn = wpn;
}

std::ostream & operator<<(std::ostream & o, Character const & src) {
	if (src.getWpn())
		o << src.getName()<< " has "<< src.getAP() <<" AP and wields a " << src.getWpn()->getName() << std::endl;
	else
		o << src.getName()<< " has "<< src.getAP() <<" AP and is unarmed" << std::endl;
	return o;
}
