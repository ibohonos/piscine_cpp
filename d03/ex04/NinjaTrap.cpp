#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {
	this->_name = "Ninja";
	this->_logo = "NING4-TP";
	this->_level = 1;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << this->_logo << " <" << this->_name << ">: Ninja is here!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) {
	this->_name = name;
	this->_logo = "NING4-TP";
	this->_level = 1;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << this->_logo << " <" << this->_name << ">: Ninja is here!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &rfs) {
	*this = rfs;
	std::cout << this->_logo << " <" << this->_name << ">: Ninja is here!" << std::endl;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << this->_logo << " <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &rfs) const {
	std::cout << this->_logo << " <" << this->_name << "> dances with " << rfs.getLogo() << " <" << rfs.getName() << ">." << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &rfs) const {
	std::cout << this->_logo << " <" << this->_name << "> plays with " << rfs.getLogo() << " <" << rfs.getName() << ">." << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &rfs) const {
	std::cout << this->_logo << " <" << this->_name << "> meets brother " << rfs.getLogo() << " <" << rfs.getName() << ">." << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &rfs) const {
	std::cout << this->_logo << " <" << this->_name << "> meets father " << rfs.getLogo() << " <" << rfs.getName() << ">." << std::endl;
}
