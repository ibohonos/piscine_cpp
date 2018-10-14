#include "Player.hpp"

Player::Player(void) {
	setLives(5);
}

Player::Player(WINDOW *win, Enemy *enemies, Asteroids *aster, Stars *star)
{
	_win = win;
	_enems = enemies;
	_aster = aster;
	_star = star;
	getmaxyx(getWindow(), this->_my, this->_mx);
	setPX(_mx / 2 - 2);
	setPY(_my / 1.5);

	setSX(3);
	setSY(1);
	keypad(getWindow(), true);
	setLives(5);
}

Player::Player(Player const &rfs) {
	*this = rfs;
}

Player::~Player(void) {}

Player		&Player::operator=( Player const &rfs )
{
	this->_mx = rfs._mx;
	this->_my = rfs._my;
	this->_enems = rfs._enems;
	this->_star = rfs._star;
	this->_shots = rfs._shots;
	this->_lives = rfs._lives;
	return *this;
}


void		Player::pathDell(void)
{
	mvwaddstr(getWindow(), getPY(), getPX(), "     ");
}

void Player::disp(void)
{
	start_color();
	init_pair(1, COLOR_BLUE, COLOR_BLACK);
	wattron(getWindow(), COLOR_PAIR(1));
	wattron(getWindow(), A_BOLD);
	mvwaddstr(getWindow(), getPY(), getPX(), "\\M/");
	wattroff(getWindow(), A_BOLD);
	wattroff(getWindow(), COLOR_PAIR(1));
	colCheck();
}

void Player::mvup()
{
	this->pathDell();
	int y = getPY();
	y -= 1;
	if (y < 1)
		y = 1;
	setPY(y);
}

void Player::dwnmv()
{
	this->pathDell();
	int y = getPY();
	y += 1;
	if (y > this->_my - 2)
		y = this->_my - 2;
	setPY(y);
}

void Player::mvleft()
{
	this->pathDell();
	int x = getPX();
	x -= 1;
	if (x < 1)
		x = 1;
	setPX(x);
}

void Player::mvright()
{
	this->pathDell();
	int x = getPX();
	x += 1;
	if (x > this->_mx - _sx - 1)
		x = this->_mx - _sx - 1;
	setPX(x);
}

void Player::colCheck(void)
{
	for (int i = 0; i < _enemiesNum; i++)
	{
		if ((_enems[i].getPX() == this->getPX()) && (_enems[i].getPY() == this->getPY()))
		{
			_enems[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_enems[i].getPX() == this->getPX() + 1) && (_enems[i].getPY() == this->getPY()))
		{
			_enems[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_enems[i].getPX() == this->getPX() + 2) && (_enems[i].getPY() == this->getPY()))
		{
			_enems[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
	}
	for (int i = 0; i < _asteroidsNum; i++)
	{
		if ((_aster[i].getPX() == this->getPX()) && (_aster[i].getPY() == this->getPY()))
		{
			_aster[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_aster[i].getPX() == this->getPX() + 1) && (_aster[i].getPY() == this->getPY()))
		{
			_aster[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_aster[i].getPX() == this->getPX() + 2) && (_aster[i].getPY() == this->getPY()))
		{
			_aster[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_aster[i].getPX() + 1 == this->getPX()) && (_aster[i].getPY() == this->getPY()))
		{
			_aster[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_aster[i].getPX() + 1 == this->getPX() + 1) && (_aster[i].getPY() == this->getPY()))
		{
			_aster[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_aster[i].getPX() + 1 == this->getPX() + 2) && (_aster[i].getPY() == this->getPY()))
		{
			_aster[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_aster[i].getPX() + 2 == this->getPX()) && (_aster[i].getPY() == this->getPY()))
		{
			_aster[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_aster[i].getPX() + 2 == this->getPX() + 1) && (_aster[i].getPY() == this->getPY()))
		{
			_aster[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_aster[i].getPX() + 2 == this->getPX() + 2) && (_aster[i].getPY() == this->getPY()))
		{
			_aster[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
	}
	for (int i = 0; i < _shots->shotsNum; i++)
	{
		if ((_shots[i].getPX() == this->getPX()) && (_shots[i].getPY() == this->getPY()))
		{
			_shots[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_shots[i].getPX() == this->getPX() + 1) && (_shots[i].getPY() == this->getPY()))
		{
			_shots[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
		if ((_shots[i].getPX() == this->getPX() + 2) && (_shots[i].getPY() == this->getPY()))
		{
			_shots[i].initObject(getWindow());
			setLives(getLives() - 1);
			break;
		}
	}
}

int Player::getmv()
{
	int choice = wgetch(stdscr);
	switch (choice)
	{
	case KEY_UP:
		this->mvup();
		break;
	case KEY_DOWN:
		this->dwnmv();
		break;
	case KEY_LEFT:
		this->mvleft();
		break;
	case KEY_RIGHT:
		this->mvright();
		break;
	case 27:
		exit(1);
	default:
		break;
	}
	return (choice);
}

int Player::getLives(void)
{
	return this->_lives;
}

void Player::setLives(int n)
{
	this->_lives = n;
}

void Player::shot(void)
{
	int guns;

	guns = 1;
	for (int i = 0; i < _shots->shotsNum; i++)
	{
		if (guns)
		{
			if (!_shots[i].getIsDisp())
			{
				_shots[i].setPX(getPX());
				_shots[i].setPY(getPY() - 1);
				_shots[i].disp();
				guns--;
			}
		}
		else
		{
			_shots[i].setPX(getPX() + 2);
			_shots[i].setPY(getPY() - 1);
			_shots[i].disp();
			break;
		}
	}
}

void Player::setShots(Shot *shots)
{
	_shots = shots;
}

bool Player::isAlive(void)
{
	if (this->_lives <= 0)
		return(false);
	return(true);
}

int Player::getHP(void)
{
	return this->_hp;
}


