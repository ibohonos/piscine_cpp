#include "C.hpp"

C::C(void) {}

C::C(C const &rfs) {
	(void)rfs;
}

C::~C(void) {}

C &C::operator=(C const &rfs) {
	(void)rfs;
	return *this;
}
