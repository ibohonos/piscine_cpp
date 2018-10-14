#include "Enemy.hpp"

Enemy::Enemy(){}

Enemy::Enemy(int hp, std::string const & type)
{
	this->_hp = hp;
	this->_type = type;
}

Enemy::~Enemy() {}

Enemy	&Enemy::operator=( Enemy const &rfs )
{
	this->_hp = rfs._hp;
	this->_type = rfs._type;
	return *this;
}

Enemy::Enemy(Enemy const &rfs)
{
	*this = rfs;
}

int			Enemy::getHP() const
{
	return(this->_hp);
}

std::string	Enemy::getType() const
{
	return(this->_type);
}

void		Enemy::takeDamage(int p)
{
	if (p < 0)
		p = 0;
	this->_hp -= p;
	if (this->_hp < 0)
		this->_hp = 0;
}
