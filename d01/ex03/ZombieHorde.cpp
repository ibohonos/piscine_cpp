#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : number(n) {
	this->zombie = new Zombie[n];

	for (int i = 0; i < this->number; i++)
	{
		this->zombie[i].type = "Horde";
		this->zombie[i].name = this->randomChump();
	}
}

ZombieHorde::ZombieHorde(void) {}

ZombieHorde::~ZombieHorde(void) {}

std::string	ZombieHorde::randomChump(void) {
	int			i;
	std::string	names[] = {"John", "Hello", "World", "Harry", "Potter"};

	i = rand() % 5;
	return (names[i]);
}

void		ZombieHorde::announce(void) {
	for (int i = 0; i < this->number; ++i)
	{
		this->zombie[i].announce();
	}
}
