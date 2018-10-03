#include "Brain.hpp"

Brain::Brain(void) {}

Brain::~Brain(void) {}

std::string	Brain::identify() const {
	std::stringstream	id;
	std::string			str;
	id << this;
	str = id.str();
	for (int i = 2; i < (int)str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}
