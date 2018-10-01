#ifndef RADSCORPION_H
#define RADSCORPION_H

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion();
		RadScorpion(RadScorpion const &rfs);
		~RadScorpion();

		RadScorpion		&operator=(RadScorpion const &frs);
};

#endif