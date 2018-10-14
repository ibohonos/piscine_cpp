#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include "Objects.hpp"


class Enemy : public Objects
{
	public:
		Enemy(void);
		Enemy(Enemy const &other);
		~Enemy(void);
		void dwnmv(void);
		void disp(void);
		void pathDell(void);
		bool getIsDisp(void);

		void initObject(WINDOW *win);
		Enemy		&operator=( Enemy const &rfs );

	private:
		int _mx;
		int _my;
		static int _enemiesNum;
		bool _dis;
};

#endif