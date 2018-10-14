#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon();
	virtual ~Peon();
	Peon(std::string name);
	Peon(Peon const &rfs);

	Peon			&operator=(Peon const &rfs );
	virtual void	getPolymorphed() const;
};

std::ostream		&operator<<(std::ostream &o, Peon const &Peon);

#endif