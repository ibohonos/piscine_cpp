#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include <cassert>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	TacticalMarine* colteron = new TacticalMarine;
	ISpaceMarine* clone = new TacticalMarine(*colteron);
	ISquad	*vlc = new Squad;
	Squad	*vlc2 = new Squad;

	vlc2->push(bob);
	vlc2->push(jim);
	vlc2->push(clone);
	ISquad *vlc3 = new Squad(*vlc2);

	for (int i = 0; i < vlc3->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc3->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	return 0;
}