#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde {

	public:

		ZombieHorde(int);
		ZombieHorde(void);
		~ZombieHorde(void);

		void		announce(void);
		std::string	randomChump(void);

		Zombie		*zombie;
		int			number;
};

#endif
