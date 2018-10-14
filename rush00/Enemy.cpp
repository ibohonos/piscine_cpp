#include "Enemy.hpp"

int Enemy::_enemiesNum = 0;

Enemy::Enemy(void)
{
	std::srand(std::time(0));
	setEnemsN(getEnemsN() + 1);
}

Enemy::Enemy(Enemy const &other)
{
	*this = other;
}

Enemy::~Enemy(void) {}

bool Enemy::getIsDisp(void)
{
	return _dis;
}

Enemy	&Enemy::operator=( Enemy const &rfs ) {
	this->_mx = rfs._mx;
	this->_my = rfs._my;
	this->_enemiesNum = rfs._enemiesNum;
	this->_dis = rfs._dis;
	return *this;
}

void Enemy::pathDell(void)
{
	mvwaddstr(getWindow(), getPY(), getPX(), " ");
}

void Enemy::disp(void)
{
	start_color();
	init_pair(2, COLOR_MAGENTA, COLOR_WHITE);
	wattron(getWindow(), A_REVERSE);
	wattron(getWindow(), COLOR_PAIR(2));
	mvwaddstr(getWindow(), getPY(), getPX(), "|");
	wattroff(getWindow(), COLOR_PAIR(2));
	wattroff(getWindow(), A_REVERSE);
	_dis = 1;
}

void Enemy::dwnmv(void)
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

void Enemy::initObject(WINDOW *win)
{
	_win = win;
	_dis = 0;
	getmaxyx(getWindow(), this->_my, this->_mx);
	setPX(rand() % this->_mx + 2);
	setPY(1);
	setSX(1);
	setSY(1);
}
