#include "Human.hpp"

Human::Human(void) {}

Human::~Human(void) {}

std::string	Human::identify() const {
	return ((this->brn).identify());
}

const Brain	&Human::getBrain() const {
	return (this->brn);
}
