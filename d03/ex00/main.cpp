#include "FragTrap.hpp"

int main(void)
{
	FragTrap 	harry;
	FragTrap	roy("Roy");
	FragTrap	copyRoy(roy);

	harry.rangedAttack("chair");
	harry.meleeAttack("chair");
	harry.takeDamage(60);
	harry.takeDamage(60);
	harry.beRepaired(20);

	roy.beRepaired(20);
	roy.vaulthunter_dot_exe("you");
	roy.vaulthunter_dot_exe("you");
	roy.vaulthunter_dot_exe("you");
	roy.vaulthunter_dot_exe("you");
	roy.vaulthunter_dot_exe("you");
	return (0);
}
