#include "ZombieEvent.hpp"

int main(void)
{
	Zombie		*zombie1;
	Zombie		*zombie2;
	Zombie		*zombie3;
	ZombieEvent	event;

	zombie1 = event.randomChump();
	zombie1->announce();
	delete zombie1;

	event.setZombieType("troll");
	zombie2 = event.randomChump();
	zombie2->announce();
	delete zombie2;

	event.setZombieType("macho");
	zombie3 = event.randomChump();
	zombie3->announce();
	delete zombie3;

	return (0);
}
