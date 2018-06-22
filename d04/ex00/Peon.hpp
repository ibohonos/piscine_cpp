#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"
#include <iostream>

class Peon : public Victim {
	public:
		Peon(std::string name);
		Peon(Peon const &rfs);
		virtual ~Peon(void);

		Peon &operator=( Peon const &frs );

		virtual void	getPolymorphed(void) const;

	private:
		Peon(void);
};

#endif
