#include "Human.hpp"

int main(void)
{
	Human	bob;

	bob.action("meleeAttack", "Hello");
	bob.action("rangedAttack", "World");
	bob.action("intimidatingShout", "target");
	return (0);
}
