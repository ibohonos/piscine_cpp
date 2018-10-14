#include "Peon.hpp"

Peon::Peon(){}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &rfs)
{
	*this = rfs;
}

Peon	&Peon::operator=( Peon const &rfs )
{
	this->_name = rfs._name;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Peon const &Peon)
{
	o << "I'm " << Peon.getName() << " and I like otters !" << std::endl;
	return o;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << "  has been turned into a pink pony !" << std::endl;
} 
