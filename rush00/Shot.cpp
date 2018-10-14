#include "Shot.hpp"

int Shot::shotsNum = 0;
int Shot::_score = 0;

Shot::Shot(void)
{
	shotsNum++;
}

Shot::Shot(Shot const &other) {
	*this = other;
}

Shot::~Shot(void) {}

Shot		&Shot::operator=( Shot const &rfs )
{
	this->_mx = rfs._mx;
	this->_my = rfs._my;
	this->_dis = rfs._dis;
	return *this;
}

int 	Shot::getScore(void)
{
	return Shot::_score; 
}

void		Shot::setScore(int n)
{
	Shot::_score = n;
}


void Shot::pathDell(void)
{
	mvwaddstr(getWindow(), getPY(), getPX(), " ");
}

void Shot::disp(void)
{
	start_color();
	init_pair(4, COLOR_GREEN, COLOR_BLACK);
	wattron(getWindow(), COLOR_PAIR(4));
	mvwaddstr(getWindow(), getPY(), getPX(), "-");
	wattroff(getWindow(), COLOR_PAIR(4));
	_dis = 1;
}

void Shot::move(void)
{
	if (!_dis)
	 	return;
	this->pathDell();
	int y = getPY();
	y -= 1;
	if (y < 2)
	{
		setPY(0);
		setPX(0);
		this->disp();
		this->initObject(getWindow());
		return;
	}
	setPY(y);
	this->disp();
}

void Shot::initObject(WINDOW *win)
{
	_win = win;
	_dis = 0;
	getmaxyx(getWindow(), this->_my, this->_mx);
	setSX(1);
	setSY(1);
}

bool Shot::getIsDisp(void)
{
	return _dis;
}


void	Shot::colCheck(Enemy *enems, Asteroids *aster)
{
	for (int i = 0; i < _enemiesNum; i++)
	{
		if ((enems[i].getPX() == this->getPX()) && (enems[i].getPY() == this->getPY()))
		{
			enems[i].pathDell();
			enems[i].initObject(getWindow());
			this->initObject(getWindow());
			this->pathDell();
			setScore(getScore() + 5);
		}
	}
	for (int i = 0; i < _asteroidsNum; i++)
	{
		if ((aster[i].getPX() == this->getPX()) && (aster[i].getPY() == this->getPY()))
		{
			aster[i].pathDell();
			aster[i].initObject(getWindow());
			this->initObject(getWindow());
			this->pathDell();
		}
		if ((aster[i].getPX() + 1 == this->getPX()) && (aster[i].getPY() == this->getPY()))
		{
			aster[i].pathDell();
			aster[i].initObject(getWindow());
			this->initObject(getWindow());
			this->pathDell();
		}
		if ((aster[i].getPX() + 2 == this->getPX()) && (aster[i].getPY() == this->getPY()))
		{
			aster[i].pathDell();
			aster[i].initObject(getWindow());
			this->initObject(getWindow());
			this->pathDell();
		}
	}
}
