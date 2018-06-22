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

void	ScavTrap::challengeNewcomer(std::string const & target) const {
	std::string	challs[] = {"Tough Mudder", "Loosers Fight", "Tea Ceremony", "DOTAAAA", "WTF"};

	std::cout << this->_logo << " <" << this->_name << "> challenges " << target << " in " <<
		challs[rand() % 5] << std::endl;
}
