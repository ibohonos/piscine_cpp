#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>

class Human {
	private:
		struct link_func {
			std::string		action_name;
			void			(Human::*f)(std::string const &target);
		};

		link_func	actions[3];

		void meleeAttack(std::string const &target);
		void rangedAttack(std::string const &target);
		void intimidatingShout(std::string const &target);

	public:
		Human(void);
		~Human(void);
		void action(std::string const &action_name, std::string const &target);
};

#endif