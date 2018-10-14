#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon
{
	protected:
		std::string	_name;
		int			_damage;
		int			_apcost;
	public:
		AWeapon();
		virtual ~AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &rfs);

		AWeapon	&operator=(AWeapon const &rfs);
		std::string	getName() const;
		int 		getAPCost() const;
		int 		getDamage() const;
		virtual void attack() const = 0;
};

#endif
