#include "Asteroids.hpp"

int Asteroids::_asteroidsNum = 0;

Asteroids::Asteroids(void)
{
	std::srand(std::time(0));
	setAsterN(getAsterN() + 1);
}

Asteroids::Asteroids(Asteroids const &other)
{
	*this = other;
}

Asteroids::~Asteroids(void) {}

Asteroids	&Asteroids::operator=( Asteroids const &rfs ) {
	this->_mx = rfs._mx;
	this->_my = rfs._my;
	this->_asteroidsNum = rfs._asteroidsNum;
	this->_dis = rfs._dis;
	return *this;
}

void Asteroids::pathDell(void)
{
	mvwaddstr(getWindow(), getPY(), getPX(), "   ");
}

void Asteroids::disp(void)
{
	start_color();
	init_pair(10, COLOR_CYAN, COLOR_BLACK);
	wattron(getWindow(), A_REVERSE);
	wattron(getWindow(), COLOR_PAIR(10));
	mvwaddstr(getWindow(), getPY(), getPX(), " @ ");
	wattroff(getWindow(), COLOR_PAIR(10));
	wattroff(getWindow(), A_REVERSE);
	_dis = 1;
}

void Asteroids::dwnmv(void)
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

void Asteroids::initObject(WINDOW *win)
{
	_win = win;
	_dis = 0;
	getmaxyx(getWindow(), this->_my, this->_mx);
	setPX(rand() % this->_mx + 2);
	setPY(3);
	setSX(3);
	setSY(1);
}
