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
		void mvdown(void);
		void display(void);
		void deletePath(void);
		bool getIsDisp(void);

		void initObject(WINDOW *win);
		Enemy		&operator=( Enemy const &rfs );

	private:
		int _xMax;
		int _yMax;
		static int _enemiesNum;
		bool _isDisp;
};

#endif