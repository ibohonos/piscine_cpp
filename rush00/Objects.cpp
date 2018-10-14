#include "Objects.hpp"

int Objects::_enemiesNum = 0;
int Objects::_asteroidsNum = 0;
int Objects::_shotsNum = 0;
int Objects::_starsNum = 0;

Objects::Objects(void) {}

Objects::Objects(WINDOW *win) : _win(win), _px(0), _py(0),
		_sx(0), _sy(0), _color("") {}

Objects::Objects(Objects const &rfs) {
	*this = rfs;
}

Objects::~Objects(void) {}

Objects		&Objects::operator=( Objects const &rfs ) {
	this->_px = rfs._px;
	this->_py = rfs._py;
	this->_sx = rfs._sx;
	this->_sy = rfs._sy;
	this->_color = rfs._color;
	this->_win = rfs._win;
	this->_enemiesNum = rfs._enemiesNum;
	this->_asteroidsNum = rfs._asteroidsNum;
	this->_starsNum = rfs._starsNum;
	this->_shotsNum = rfs._shotsNum;
	return *this;
}

int			Objects::getPX(void) {
	return this->_px;
}

int			Objects::getPY(void) {
	return this->_py;
}

int			Objects::getSX(void) {
	return this->_sx;
}

int			Objects::getSY(void) {
	return this->_sy;
}

int			Objects::getEnemsN(void) {
	return this->_enemiesNum;
}

int			Objects::getAsterN(void) {
	return this->_asteroidsNum;
}

int			Objects::getStarN(void) {
	return this->_starsNum;
}

int				Objects::getShotNum(void) {
	return this->_shotsNum;
}

std::string	Objects::getColor(void) {
	return this->_color;
}

WINDOW		*Objects::getWindow(void) {
	return this->_win;
}

void		Objects::setPX(int n) {
	this->_px = n;
}

void		Objects::setPY(int n) {
	this->_py = n;
}

void		Objects::setSX(int n) {
	this->_sx = n;
}

void		Objects::setSY(int n) {
	this->_sy = n;
}

void		Objects::setEnemsN(int n) {
	this->_enemiesNum = n;
}

void		Objects::setAsterN(int n) {
	this->_asteroidsNum = n;
}

void		Objects::setStarN(int n) {
	this->_starsNum = n;
}

void		Objects::setColor(std::string str) {
	this->_color = str;
}

void		Objects::setShotNum(int n) {
	this->_color = n;
}
