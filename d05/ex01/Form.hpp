#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <exception>

class Bureaucrat;

class Form {
public:
	Form();
	Form(std::string name, int signGrade, int execGrade);
	Form(Form const &rfs);
	virtual ~Form();

	Form &operator=(Form const &rfs);
	std::string getName() const;
	bool getSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;
	void beSigned(Bureaucrat const &bure);

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &rfs);
		virtual ~GradeTooHighException() throw();

		GradeTooHighException &operator=(GradeTooHighException const &rfs);
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &rfs);
		virtual ~GradeTooLowException() throw();

		GradeTooLowException &operator=(GradeTooLowException const &rfs);
		virtual const char* what() const throw();
	};

private:
	std::string const _name;
	bool _signed;
	int const _signGrade;
	int const _execGrade;
};

std::ostream &operator<<(std::ostream &o, Form const &rfs);

#endif
