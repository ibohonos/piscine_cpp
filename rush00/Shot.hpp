#ifndef SHOT_HPP
#define SHOT_HPP

#include <iostream>

#include "Objects.hpp"
#include "Enemy.hpp"
#include "Asteroids.hpp"

class Shot : public Objects
{
	public:
		Shot(void);
		Shot(Shot const &other);
		~Shot(void);
		Shot		&operator=( Shot const &rfs );

		void move(void);
		void disp(void);
		void pathDell(void);
		void setScore(int n);
		int getScore(void);
		void initObject(WINDOW *win);

		bool getIsDisp(void);
		static int shotsNum;
		void colCheck(Enemy *enems, Asteroids *aster);

	private:
		int _mx;
		int _my;
		bool _dis;
		static int _score;
};

#endif
