#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _name("Scavy"), _hitPoints(100), _maxHitPoints(100),
		_energyPoints(50), _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20),
		_rangedAttackDamage(15), _armorDamageReduction(3) {
	std::cout << "SC4V-TP <" << this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100),
		_energyPoints(50), _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20),
		_rangedAttackDamage(15), _armorDamageReduction(3) {
	std::cout << "SC4V-TP <" << this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rfs) {
	*this = rfs;
	std::cout << "SC4V-TP <" << this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "SC4V-TP <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

std::string		ScavTrap::getName(void) const {
	return (this->_name);
}

ScavTrap		&ScavTrap::operator=( ScavTrap const &rfs ) {
	this->_name = rfs._name;
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

void	ScavTrap::rangedAttack(std::string const &target) const {
	std::cout << "SC4V-TP <" << this->_name << "> attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target) const {
	std::cout << "SC4V-TP <" << this->_name << "> melee attacks " << target << ", causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "SC4V-TP <" << this->_name << "> is damaged for " << amount << " HP." << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0) {
		std::cout << "SC4V-TP <" << this->_name << "> is dead. Don't bother dead... " << std::endl;
		this->_hitPoints = 0;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "SC4V-TP <" << this->_name << "> is repairing and getting " << amount << " HP." << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints) {
		std::cout << "SC4V-TP <" << this->_name << "> is fully repaired. " << std::endl;
		this->_hitPoints = this->_maxHitPoints;
	}
}

void	ScavTrap::challengeNewcomer(std::string const & target) const {
	std::string	challs[] = {"Tough Mudder", "Loosers Fight", "Tea Ceremony", "DOTAAAA", "WTF"};

	std::cout << "SC4V-TP <" << this->_name << "> challenges " << target << " in " <<
		challs[rand() % 5] << std::endl;
}
