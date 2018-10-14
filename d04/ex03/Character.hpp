#include "ICharacter.hpp"
#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>

class Character : public ICharacter
{
	public:
		Character(void);
        Character(const std::string &name);
        Character(const Character &src);
        ~Character(void);

        Character                   &operator= (const Character &rhs);

		virtual std::string const 	&getName() const;
		virtual void 				equip(AMateria* m);
		virtual void 				unequip(int idx);
		virtual void 				use(int idx, ICharacter& target);

	private:
		std::string                 _name;
        AMateria*                   _materia[4];
        int                         _index;

};

#endif
