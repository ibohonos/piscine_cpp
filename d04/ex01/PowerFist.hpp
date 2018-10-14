#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		virtual ~PowerFist();
		PowerFist(std::string const & name, int apcost, int damage);
		PowerFist(PowerFist const &rfs);

		PowerFist	&operator=(PowerFist const &rfs);
		virtual void attack() const;
};

#endif

