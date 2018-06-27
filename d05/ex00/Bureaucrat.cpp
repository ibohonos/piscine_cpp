#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Barry"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rfs) {
	*this = rfs;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rfs) {
	this->_grade = rfs._grade;
	return *this;
}

void Bureaucrat::operator++(int) {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}
void Bureaucrat::operator--(int) {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::string Bureaucrat::getName(void) const {
	return this->_name;
}

int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

// too low
Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &rfs) {
	*this = rfs;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rfs) {
	(void)rfs;
	return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Grade is too low");
}

// too high :)
Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &rfs) {
	*this = rfs;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rfs) {
	(void)rfs;
	return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {
}
		
const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Grade is too high");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rfs) {
	o << "<" << rfs.getName() << ">, bureaucrat grade <" << rfs.getGrade() << ">" << std::endl;
	return o;
}