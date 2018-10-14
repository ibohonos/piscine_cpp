#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int			_ap;
		AWeapon		*_wpn;

	public:
		Character();
		~Character();
		Character(std::string const & name);
		Character(Character const &rfs);
		Character	&operator=( Character const &rfs );


		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string		getName() const;
		int				getAP() const;
		std::string		getWpnName() const;
		AWeapon			*getWpn() const;
};

std::ostream 	&operator<<(std::ostream &o, Character const &rfs);

#endif
