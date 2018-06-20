#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const &rfs);
		~Fixed(void);

		Fixed 	&operator=(Fixed const &rfs);
		int		getRawBits(void) const;
		float 	toFloat(void) const;
		int 	toInt(void) const;

	private:
		int					_value;
		static int const	_bits = 8;
};

std::ostream 	&operator<<(std::ostream &o, Fixed const &rfs);

#endif