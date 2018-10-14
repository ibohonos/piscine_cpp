#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		virtual ~RadScorpion();
		RadScorpion(RadScorpion const &rfs);

		RadScorpion	&operator=(RadScorpion const &rfs);

};

#endif
