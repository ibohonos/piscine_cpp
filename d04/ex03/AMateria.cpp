#include "AMateria.hpp"

AMateria::AMateria() : xp_(0) {}

AMateria::AMateria(std::string const & type)
{
	xp_ = 0;
	_type = type;
}

AMateria::AMateria(const AMateria &src)
{
    *this = src;
    return ;
}

AMateria::~AMateria(void)
{
    return ;
}

AMateria	&AMateria::operator= (const AMateria &rhs)
{
    xp_ = rhs.xp_;
    _type = rhs._type;
    return (*this);
}

const std::string	&AMateria::getType(void) const
{
    return (_type);
}

unsigned int  AMateria::getXP(void) const
{
    return (xp_);
}