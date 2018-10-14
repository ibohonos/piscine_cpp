#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main() {
	OfficeBlock block;
	Intern ivan;
	Bureaucrat vova("Vova", 50);
	Bureaucrat vlad("Vlad", 100);
	try {
		block.doBureaucracy("robotomy request", "robo");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------" << std::endl;
	block.setIntern(ivan);
	try {
		block.doBureaucracy("robotomy request", "robo");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------" << std::endl;
	block.setSign(vova);
	block.setExec(vlad);
	try {
		block.doBureaucracy("robotomy request", "robo");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------" << std::endl;
	try {
		block.doBureaucracy("shrubberry creation", "tree");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------" << std::endl;
	try {
		block.doBureaucracy("presidential pardon", "pardon");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------" << std::endl;
	try {
		block.doBureaucracy("wtf", "wtf");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
