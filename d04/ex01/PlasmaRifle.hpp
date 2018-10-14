#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		virtual ~PlasmaRifle();
		PlasmaRifle(std::string const & name, int apcost, int damage);
		PlasmaRifle(PlasmaRifle const &rfs);

		PlasmaRifle	&operator=(PlasmaRifle const &rfs);
		virtual void attack() const;
};

#endif
