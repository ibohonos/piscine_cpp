#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {}

ZombieEvent::~ZombieEvent(void) {}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name, this->_type);

	return (zombie);
}

Zombie		*ZombieEvent::randomChump(void)
{
	int			i;
	Zombie		*zombie;
	std::string	names[] = {"John", "Hello", "World", "Harry", "Potter"};

	if (this->_type == "")
		this->setZombieType("ded");
	i = rand() % 5;
	zombie = this->newZombie(names[i]);
	return (zombie);
}
