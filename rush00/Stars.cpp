#include "Stars.hpp"

int Stars::_starsNum = 0;

Stars::Stars(void)
{
	std::srand(std::time(0));
	setStarN(getStarN() + 1);
}


Stars::Stars(Stars const &other) {
	*this = other;
}

Stars::~Stars(void) {}

Stars		&Stars::operator=( Stars const &rfs ) {
	this->_mx = rfs._mx;
	this->_my = rfs._my;
	this->_dis = rfs._dis;
	this->_starsNum = rfs._starsNum;
	return *this;
}

void Stars::pathDell(void)
{
	mvwaddstr(getWindow(), getPY(), getPX(), " ");
}

void Stars::disp(void)
{
	start_color();
	init_pair(7, COLOR_BLACK, COLOR_YELLOW);
	wattron(getWindow(), A_REVERSE);
	wattron(getWindow(), COLOR_PAIR(7));
	mvwaddstr(getWindow(), getPY(), getPX(), ".");
	wattroff(getWindow(), COLOR_PAIR(7));
	wattroff(getWindow(), A_REVERSE);
	_dis = 1;
}

void Stars::dwnmv(void)
{
	if (!_dis)
		return;
	this->pathDell();
	int y = getPY();
	y += 1;
	if (y > this->_my - 2)
	{
		this->pathDell();
		this->initObject(getWindow());
		return;
	}
	setPY(y);
	this->disp();
}

void Stars::initObject(WINDOW *win)
{
	_win = win;
	_dis = 0;
	getmaxyx(getWindow(), this->_my, this->_mx);
	setPX(rand() % this->_mx + 2);
	setPY(rand() % this->_my + 2);
	setSX(1);
	setSY(1);
}
