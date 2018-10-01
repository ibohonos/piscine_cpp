#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist();
		PowerFist(PowerFist const &rfs);
		virtual ~PowerFist();

		PowerFist 	&operator=(PowerFist const &rfs);
		virtual void 	attack() const;
};

#endif