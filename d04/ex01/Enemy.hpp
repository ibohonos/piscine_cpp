#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy
{
	protected:
		int			_hp;
		std::string	_type;
	public:
		Enemy();
		virtual ~Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &rfs);

		Enemy 	&operator=(Enemy const &frs);

		std::string		getType() const;
		int 			getHP() const;
		virtual void	takeDamage(int p);
};




#endif
