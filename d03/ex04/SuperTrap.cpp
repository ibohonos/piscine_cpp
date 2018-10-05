#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
	this->_name = "Super";
	this->_logo = "S4PR-TP";
	this->_level = 1;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << this->_logo << " <" << this->_name << ">: Super puper!" << std::endl;
}

SuperTrap::SuperTrap(std::string name) {
	this->_name = name;
	this->_logo = "S4PR-TP";
	this->_level = 1;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << this->_logo << " <" << this->_name << ">: Super puper!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &rfs) {
	*this = rfs;
	std::cout << this->_logo << " <" << this->_name << ">: Super puper!" << std::endl;
}

SuperTrap::~SuperTrap() {
	std::cout << this->_logo << " <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

SuperTrap		&SuperTrap::operator=( SuperTrap const &rfs ) {
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

void	SuperTrap::meleeAttack(std::string const &target) const {
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const &target) const {
	FragTrap::rangedAttack(target);
}
