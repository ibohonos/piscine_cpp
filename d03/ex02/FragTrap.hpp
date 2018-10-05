#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &rfs);
		~FragTrap(void);

		FragTrap	&operator=( FragTrap const &rfs );

		void		vaulthunter_dot_exe(std::string const &target);

};

#endif