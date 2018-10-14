#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(){}

Victim::~Victim()
{
	std::cout << "Victim " << this->getName() << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(Victim const &rfs)
{
	*this = rfs;
}

void	Victim::introduce() const
{
	std::cout << "I'm " << this->getName() << " and I like otters !" << std::endl;
}

Victim	&Victim::operator=( Victim const &rfs )
{
	this->_name = rfs._name;
	return *this;
}

std::string	Victim::getName() const
{
	return(this->_name);
}

std::ostream	&operator<<(std::ostream &o, Victim const &Victim)
{
	o << "I'm " << Victim.getName() << " and I like otters !" << std::endl;
	return o;
}

void	Victim::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
} 
