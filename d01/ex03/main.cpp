#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde zh1 = ZombieHorde(10);
	ZombieHorde zh2 = ZombieHorde();

	zh1.announce();
	zh2.announce();
	return (0);
}
