#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {
	public:
		Human();
		~Human();

		std::string	identify() const;
		const Brain	&getBrain() const;

		const Brain brn;
};

#endif