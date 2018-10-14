#ifndef CENTRALBUREAUCRACY_H
#define CENTRALBUREAUCRACY_H

#include "OfficeBlock.hpp"

class CentralBureaucracy {
public:
	CentralBureaucracy();
	CentralBureaucracy(CentralBureaucracy const &rfs);
	virtual ~CentralBureaucracy();

	CentralBureaucracy &operator=(CentralBureaucracy const &rfs);

	void feedSign(Bureaucrat &rfs);
	void feedExec(Bureaucrat &rfs);
	void queueUp(std::string target);
	void doBureaucracy();

private:
	OfficeBlock _block[20];
	std::string _targets[50];
	int _s;
	int _e;
	int _i;
};

#endif