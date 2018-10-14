#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string		_type;
		unsigned int 	xp_;

	public:
		AMateria(void);
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria &src);
        AMateria			&operator=(const AMateria &rhs);


		std::string const &	getType() const; //Returns the materia type
		unsigned int 		getXP() const; //Returns the Materia's XP
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
};


#endif
