#include "Zombie.hpp"

Zombie::Zombie(std::string n, std::string t) : name(n), type(t)
{
	std::cout << "Zombie is created!" << std::endl;
}

Zombie::Zombie(void) {}

Zombie::~Zombie(void)
{
	std::cout << "Zombie is dead!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}
