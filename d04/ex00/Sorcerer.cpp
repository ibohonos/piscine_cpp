#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void){}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead . Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &rfs)
{
	*this = rfs;
}

void	Sorcerer::introduce() const
{
	std::cout << "I am " << this->_name << ", " << this->_title << ",  and I like ponies !" << std::endl;
}

Sorcerer	&Sorcerer::operator=( Sorcerer const &rfs )
{
	this->_name = rfs._name;
	this->_title = rfs._title;
	return *this;
}

std::string	Sorcerer::getName() const
{
	return(this->_name);
}
std::string	Sorcerer::getTitle() const
{
	return(this->_title);
}

void	Sorcerer::polymorph(Victim const & rfs) const
{
	rfs.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &sorcerer)
{
	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ",  and I like ponies !" << std::endl;
	return o;
}

