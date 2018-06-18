#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	public:
		Weapon(std::string tp);
		~Weapon(void);

		const std::string 	&getType(void) const;
		void				setType(std::string tp);

		std::string 		type;
};

#endif
