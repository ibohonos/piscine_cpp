#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion	&RadScorpion::operator=( RadScorpion const &rfs )
{
	this->_type = rfs._type;
	this->_hp = rfs._hp;
	return *this;
}

RadScorpion::RadScorpion(RadScorpion const &rfs) : Enemy(rfs)
{
	*this = rfs;
	std::cout << "* click click click *" << std::endl;
}
