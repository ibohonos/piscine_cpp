#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B : public Base {
	public:
		B(void);
		B(B const &rfs);
		virtual ~B(void);

		B &operator=(B const &rfs);
};

#endif
