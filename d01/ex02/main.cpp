#include "ZombieEvent.hpp"

int main(void)
{
	Zombie		*zombie1;
	Zombie		*zombie2;
	Zombie		*zombie3;
	Zombie		zombie4;
	ZombieEvent	event;

	zombie1 = event.newZombie("Jack");
	zombie1->announce();
	delete zombie1;

	event.setZombieType("troll");
	zombie2 = event.newZombie("Chack");
	zombie2->announce();
	delete zombie2;

	event.setZombieType("macho");
	zombie3 = event.randomChump();
	delete zombie3;

	zombie4.announce();

	return (0);
}
