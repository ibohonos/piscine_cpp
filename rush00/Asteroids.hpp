#ifndef ASTEROIDS_HPP
#define ASTEROIDS_HPP

#include <iostream>
#include "Objects.hpp"

class Asteroids : public Objects
{
	public:
		Asteroids(void);
		Asteroids(Asteroids const &other);
		~Asteroids(void);
		void dwnmv(void);
		void disp(void);
		void pathDell(void);

		void initObject(WINDOW *win);
		Asteroids	&operator=( Asteroids const &rfs );

	private:
		int			_mx;
		int			_my;
		static int	_asteroidsNum;
		bool		_dis;
};

#endif