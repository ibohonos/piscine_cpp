#ifndef OBJECTS_HPP
#define OBJECTS_HPP

#include <iostream>
#include <string>
#include <ncurses.h>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

class Objects {
	public:
		Objects(void);
		Objects(WINDOW *win);
		Objects(Objects const &rfs);
		~Objects(void);

		Objects			&operator=( Objects const &rfs );
		int				getPX(void);
		int				getPY(void);
		int				getSX(void);
		int				getSY(void);
		std::string		getColor(void);
		WINDOW			*getWindow(void);
		int				getEnemsN(void);
		int				getAsterN(void);
		int				getStarN(void);
		int				getShotNum(void);

		void			setPX(int n);
		void			setPY(int n);
		void			setSX(int n);
		void			setSY(int n);
		void			setColor(std::string str);
		void			setEnemsN(int n);
		void			setAsterN(int n);
		void			setStarN(int n);
		void			setShotNum(int n);
		void			initObject(WINDOW *win);

	protected:
		WINDOW			*_win;

		int				_px;
		int				_py;
		int				_sx;
		int				_sy;
		std::string		_color;
		static int	_enemiesNum;
		static int	_asteroidsNum;
		static int	_starsNum;
		static int	_shotsNum;
};

#endif
