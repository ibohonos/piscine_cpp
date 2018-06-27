#include "B.hpp"

B::B(void) {}

B::B(B const &rfs) {
	(void)rfs;
}

B::~B(void) {}

B	&B::operator=(B const &rfs) {
	(void)rfs;
	return *this;
}
