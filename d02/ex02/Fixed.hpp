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

		Fixed	&operator=(Fixed const &rfs);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed	operator+(Fixed const &rfs) const;
		Fixed	operator-(Fixed const &rfs) const;
		Fixed	operator*(Fixed const &rfs) const;
		Fixed	operator/(Fixed const &rfs) const;

		bool	operator>(Fixed const &rfs) const;
		bool	operator>=(Fixed const &rfs) const;
		bool	operator<(Fixed const &rfs) const;
		bool	operator<=(Fixed const &rfs) const;
		bool	operator==(Fixed const &rfs) const;
		bool	operator!=(Fixed const &rfs) const;

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		static const Fixed	&max(Fixed const &f1, Fixed const &f2);
		static const Fixed	&min(Fixed const &f1, Fixed const &f2);
		static Fixed		&max(Fixed &f1, Fixed &f2);
		static Fixed		&min(Fixed &f1, Fixed &f2);

	private:
		int					_value;
		static int const	_bits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rfs);

#endif
