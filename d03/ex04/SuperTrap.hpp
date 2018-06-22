#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &rfs);
		~SuperTrap();

		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
};

#endif
