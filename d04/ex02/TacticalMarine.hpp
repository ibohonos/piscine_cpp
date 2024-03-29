#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		~TacticalMarine();
		TacticalMarine(TacticalMarine const &rfs);

		TacticalMarine &operator=(TacticalMarine const &rfs);

		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
