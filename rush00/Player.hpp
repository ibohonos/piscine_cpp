#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>
#include <ncurses.h>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

#include "Objects.hpp"
#include "Enemy.hpp"
#include "Shot.hpp"
#include "Asteroids.hpp"
#include "Stars.hpp"


class Player : public Objects
{
	public:
		Player(void);
		Player(WINDOW *win, Enemy *enemies, Asteroids *aster, Stars *star);
		Player(Player const &rfs);
		~Player(void);

		Player		&operator=( Player const &rfs );

		void mvup(void);
		void dwnmv(void);
		void mvleft(void);
		void mvright(void);
		int getmv(void);
		void disp(void);
		void pathDell(void);


		void setShots(Shot * shots);

		bool isAlive(void);

		int getLives(void);
		int getHP(void);
		void setHP(int n);
		void setLives(int n);

		void colCheck(void);
		bool checkLife(void);
		void shot(void);

	private:
		int _mx;
		int _my;
		Enemy *_enems;
		Asteroids *_aster;
		Stars *_star;
		Shot * _shots;
		int _lives;
		int _hp;
};

#endif
