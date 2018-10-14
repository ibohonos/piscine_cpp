#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		virtual ~SuperMutant();
		SuperMutant(SuperMutant const &rfs);

		SuperMutant	&operator=(SuperMutant const &rfs);
		virtual void	takeDamage(int p);

};

#endif
