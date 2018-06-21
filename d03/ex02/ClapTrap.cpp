#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Clap"), _logo("CL4P-TP"), _hitPoints(100), _maxHitPoints(100),
		_energyPoints(50), _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20),
		_rangedAttackDamage(15), _armorDamageReduction(3) {
	std::cout << this->_logo << " <" << this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _logo("CL4P-TP"), _hitPoints(100), _maxHitPoints(100),
		_energyPoints(50), _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20),
		_rangedAttackDamage(15), _armorDamageReduction(3) {
	std::cout << this->_logo << " <" << this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rfs) {
	*this = rfs;
	std::cout << this->_logo << " <" << this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << this->_logo <<" <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

std::string		ClapTrap::getName(void) const {
	return (this->_name);
}

ClapTrap		&ClapTrap::operator=( ClapTrap const &rfs ) {
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

void	ClapTrap::rangedAttack(std::string const &target) const {
	std::cout << this->_logo << " <" << this->_name << "> attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target) const {
	std::cout << this->_logo << " <" << this->_name << "> melee attacks " << target << ", causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->_logo << " <" << this->_name << "> is damaged for " << amount << " HP." << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0) {
		std::cout << this->_logo <<" <" << this->_name << "> is dead. Don't bother dead... " << std::endl;
		this->_hitPoints = 0;
	}
}
