#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	this->_name = "Scavy";
	this->_logo = "SC4V-TP";
	std::cout << this->_logo << " <" << this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->_logo = "SC4V-TP";
	std::cout << this->_logo << " <" << this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rfs) {
	*this = rfs;
	std::cout << this->_logo << " <" << this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << this->_logo << " <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

ScavTrap		&ScavTrap::operator=( ScavTrap const &rfs ) {
	this->_name = rfs._name;
	this->_logo = rfs._logo;
	this->_hitPoints = rfs._hitPoints;
	this->_maxHitPoints = rfs._maxHitPoints;
	this->_energyPoints = rfs._energyPoints;
	this->_maxEnergyPoints = rfs._maxEnergyPoints;
	this->_level = rfs._level;
	this->_meleeAttackDamage = rfs._meleeAttackDamage;
	this->_rangedAttackDamage = rfs._rangedAttackDamage;
	this->_armorDamageReduction = rfs._armorDamageReduction;
	return *this;
}

void	ScavTrap::challengeNewcomer(std::string const & target) const {
	std::string	challs[] = {"Tough Mudder", "Loosers Fight", "Tea Ceremony", "DOTAAAA", "WTF"};

	std::cout << this->_logo << " <" << this->_name << "> challenges " << target << " in " <<
		challs[rand() % 5] << std::endl;
}
