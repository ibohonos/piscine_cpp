#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &rfs);
		virtual ~Bureaucrat(void);

		Bureaucrat &operator=(Bureaucrat const &rfs);
		void operator++(int);
		void operator--(int);
		std::string getName(void) const;
		int getGrade(void) const;

		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const &rfs);
				virtual ~GradeTooHighException(void) throw();

				GradeTooHighException &operator=(GradeTooHighException const &rfs);
				virtual const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const &rfs);
				virtual ~GradeTooLowException(void) throw();

				GradeTooLowException &operator=(GradeTooLowException const &rfs);
				virtual const char* what(void) const throw();
		};

	private:
		std::string const _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rfs);

#endif
