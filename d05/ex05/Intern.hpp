#ifndef INTERN_H
#define INTERN_H
#include "Form.hpp"

class Intern {
public:
	Intern();
	Intern(Intern const &rfs);
	virtual ~Intern();

	Intern &operator=(Intern const &rfs);
	Form *makeForm(std::string name, std::string target);
};

#endif
