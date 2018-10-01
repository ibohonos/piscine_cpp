#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &rfs);
		virtual ~PlasmaRifle();

		PlasmaRifle 	&operator=(PlasmaRifle const &rfs);
		virtual void 	attack() const;
};

#endif