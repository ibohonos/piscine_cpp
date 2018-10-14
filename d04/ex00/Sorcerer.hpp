#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		Sorcerer(Sorcerer const &rfs);

		Sorcerer	&operator=( Sorcerer const &rfs );

		void		polymorph(Victim const &) const;
		void		introduce() const;
		std::string	getName() const;
		std::string	getTitle() const;

	private:
		std::string _name;
		std::string _title;
	
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &sorcerer);

#endif