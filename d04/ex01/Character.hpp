#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
	protected:
		std::string	_name;
		int			_ap;
		AWeapon		*_wpn;

		Character();

	public:
		Character(std::string const & name);
		Character(Character const &rfs);
		~Character();

		Character &operator=(Character const &frs);

		void 			recoverAP();
		void 			equip(AWeapon*);
		void 			attack(Enemy*);
		std::string		getName() const;
		int				getAP() const;
		std::string		getWpnName() const;
		AWeapon			*getWpn() const;
};

std::ostream 	&operator<<(std::ostream &o, Character const &rfs);

#endif
