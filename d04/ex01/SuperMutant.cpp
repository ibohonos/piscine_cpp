#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant	&SuperMutant::operator=( SuperMutant const &rfs )
{
	this->_type = rfs._type;
	this->_hp = rfs._hp;
	return *this;
}

SuperMutant::SuperMutant(SuperMutant const &rfs) : Enemy(rfs)
{
	*this = rfs;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

void		SuperMutant::takeDamage(int p)
{
	p -=3;
	if (p < 0)
		p = 0;
	this->_hp -= p;

	if (this->_hp < 0)
		this->_hp = 0;
}
