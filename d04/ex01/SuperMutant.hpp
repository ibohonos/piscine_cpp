#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {
	public:
		SuperMutant();
		SuperMutant(SuperMutant const &rfs);
		~SuperMutant();

		SuperMutant 	&operator=(SuperMutant const &frs);

		virtual	void	takeDamage(int p);
};

#endif