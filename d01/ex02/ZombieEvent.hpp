#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "Zombie.hpp"

class ZombieEvent {

	public:

		ZombieEvent(void);
		~ZombieEvent(void);

		void		setZombieType(std::string type);
		Zombie		*newZombie(std::string name);
		Zombie		*randomChump(void);

	private:
		std::string		_type;
};

#endif