#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>
#include "Victim.hpp"

class Victim
{
	public:
		Victim(void);
		~Victim(void);
		Victim(std::string name);
		Victim(Victim const &rfs);

		void		introduce() const;
		Victim		&operator=( Victim const &rfs );
		std::string	getName() const;
		void		getPolymorphed() const;
	protected:
		std::string	_name;
	
};

std::ostream	&operator<<(std::ostream &o, Victim const &Victim);


#endif