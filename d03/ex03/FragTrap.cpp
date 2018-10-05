#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	this->_name = "Harry";
	this->_logo = "FR4G-TP";
	std::cout << this->_logo <<" <" << this->_name << ">: Directive one: Protect humanity! Directive two: Be cute!" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	this->_logo = "FR4G-TP";
	std::cout << this->_logo << " <" << this->_name << ">: Directive one: Protect humanity! Directive two: Be cute!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rfs) {
	*this = rfs;
	std::cout << this->_logo << " <" << this->_name << ">: Directive one: Protect humanity! Directive two: Be cute!" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << this->_logo << " <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

FragTrap 	&FragTrap::operator=( FragTrap const &rfs ) {
	this->_name = rfs._name;
	this->_logo = rfs._logo;
	this->_level = rfs._level;
	this->_hitPoints = rfs._hitPoints;
	this->_maxHitPoints = rfs._maxHitPoints;
	this->_energyPoints = rfs._energyPoints;
	this->_maxEnergyPoints = rfs._maxEnergyPoints;
	this->_meleeAttackDamage = rfs._meleeAttackDamage;
	this->_rangedAttackDamage = rfs._rangedAttackDamage;
	this->_armorDamageReduction = rfs._armorDamageReduction;
	return *this;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	std::string	attacks[] = {"ha ha", "fatal", "fireball", "love rays", "sun rays"};

	if (this->_energyPoints >= 25) {
		std::cout << this->_logo << " <" << this->_name << "> sends " << attacks[rand() % 5] << " to attack " << target << std::endl;
		this->_energyPoints -= 25;
	}
	else {
		std::cout << this->_logo << " <" << this->_name << "> has no energy to do special attack..." << std::endl;
	}
}
