#ifndef PONY_H
# define PONY_H

# include <iostream>

class Pony
{
	public:
		Pony(void);
		~Pony(void);

		std::string	name;
		std::string	color;
		std::string	age;
};

#endif