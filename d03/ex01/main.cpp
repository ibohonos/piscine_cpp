#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

	std::cout << "------------" << std::endl;

	ScavTrap 	scavy;
	ScavTrap	glory("Glory");

	glory.rangedAttack("wall");
	glory.meleeAttack("wall");
	glory.takeDamage(60);
	glory.takeDamage(60);
	glory.beRepaired(20);

	scavy.beRepaired(20);
	scavy.challengeNewcomer("him");
	scavy.challengeNewcomer("him");
	scavy.challengeNewcomer("him");
	scavy.challengeNewcomer("him");
	scavy.challengeNewcomer("him");

	return (0);
}
