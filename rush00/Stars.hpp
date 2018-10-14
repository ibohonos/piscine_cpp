#ifndef STARS_HPP
#define STARS_HPP

#include <iostream>
#include "Objects.hpp"

class Stars : public Objects
{
	public:
		Stars(void);
		Stars(Stars const &other);
		~Stars(void);
		Stars		&operator=( Stars const &rfs );
		
		void dwnmv(void);
		void disp(void);
		void pathDell(void);

		void initObject(WINDOW *win);

	private:
		int			_mx;
		int			_my;
		static int	_starsNum;
		bool		_dis;
};

#endif