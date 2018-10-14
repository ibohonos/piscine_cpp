#ifndef ASSAULTTERMUNATOR_HPP
#define ASSAULTTERMUNATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		~AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &rfs);

		AssaultTerminator &operator=(AssaultTerminator const &rfs);

		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
