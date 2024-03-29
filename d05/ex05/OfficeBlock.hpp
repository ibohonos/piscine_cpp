#ifndef OFFICEBLOCK_H
#define OFFICEBLOCK_H

#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock {
public:
	OfficeBlock();
	OfficeBlock(Intern &intrn, Bureaucrat &sign, Bureaucrat &exec);
	virtual ~OfficeBlock();

	void setIntern(Intern &intrn);
	void setSign(Bureaucrat &sign);
	void setExec(Bureaucrat &exec);
	void doBureaucracy(std::string name, std::string target);

	class NoInternException : public std::exception {
	public:
		NoInternException();
		NoInternException(NoInternException const &rfs);
		virtual ~NoInternException() throw();

		NoInternException &operator=(NoInternException const &rfs);
		virtual const char* what() const throw();
	};

	class NotEnoughBureaucrats : public std::exception {
	public:
		NotEnoughBureaucrats();
		NotEnoughBureaucrats(NotEnoughBureaucrats const &rfs);
		virtual ~NotEnoughBureaucrats() throw();

		NotEnoughBureaucrats &operator=(NotEnoughBureaucrats const &rfs);
		virtual const char* what() const throw();
	};

	class LowExecGradeException: public std::exception {
	public:
		LowExecGradeException();
		LowExecGradeException(LowExecGradeException const &rfs);
		virtual ~LowExecGradeException() throw();

		LowExecGradeException &operator=(LowExecGradeException const &rfs);
		virtual const char* what() const throw();
	};

	class LowSignGradeException: public std::exception {
	public:
		LowSignGradeException();
		LowSignGradeException(LowSignGradeException const &rfs);
		virtual ~LowSignGradeException() throw();

		LowSignGradeException &operator=(LowSignGradeException const &rfs);
		virtual const char* what() const throw();
	};

	class UnknownFormException: public std::exception {
	public:
		UnknownFormException();
		UnknownFormException(UnknownFormException const &rfs);
		virtual ~UnknownFormException() throw();

		UnknownFormException &operator=(UnknownFormException const &rfs);
		virtual const char* what() const throw();
	};


private:
	Intern *_intrn;
	Bureaucrat *_sign;
	Bureaucrat *_exec;

	OfficeBlock(OfficeBlock const &);
	OfficeBlock operator=(OfficeBlock const &);
};

#endif
