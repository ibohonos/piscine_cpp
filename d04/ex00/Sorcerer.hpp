#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &rfs);
		~Sorcerer(void);

		Sorcerer	&operator=( Sorcerer const &rfs );

		void		introduce(void) const;
		void 		polymorph(Victim const &) const;

		std::string	getName(void) const;
		std::string getTitle(void) const;

	private:
		std::string	_name;
		std::string	_title;

		Sorcerer(void);
};

std::ostream 	&operator<<( std::ostream &o, Sorcerer const &rfs );

#endif
