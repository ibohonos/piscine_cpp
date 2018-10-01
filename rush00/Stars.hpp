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
		
		void mvdown(void);
		void display(void);
		void deletePath(void);

		void initObject(WINDOW *win);

	private:
		int			_xMax;
		int			_yMax;
		static int	_starsNum;
		bool		_isDisp;
};

#endif