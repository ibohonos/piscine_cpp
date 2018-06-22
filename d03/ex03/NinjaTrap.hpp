#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &rfs);
		~NinjaTrap(void);

		void		ninjaShoebox(FragTrap &rfs) const;
		void		ninjaShoebox(NinjaTrap &rfs) const;
		void		ninjaShoebox(ScavTrap &frs) const;
		void		ninjaShoebox(ClapTrap &frs) const;
};

#endif
