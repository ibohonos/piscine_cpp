#include "A.hpp"

A::A(void) {}

A::A(A const &rfs) {
	(void)rfs;
}

A::~A(void) {}

A	&A::operator=(A const &rfs) {
	(void)rfs;
	return *this;
}
