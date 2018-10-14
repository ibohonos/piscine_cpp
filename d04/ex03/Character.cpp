#include "Character.hpp"

Character::Character(void) : _name("")
{
    return ;
}

Character::Character(const std::string &name)
{
    this->_name = name;
    for (int i = 0; i < 4; i++)
    {
        this->_materia[i] = NULL;
    }
}

Character::Character(const Character &src)
{
    *this = src;
}

Character::~Character(void) {}

Character			&Character::operator= (const Character &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i += 1)
        {
            this->_materia[i] = NULL;
            this->_materia[i] = rhs._materia[i]->clone();
        }
    }
    return (*this);
}

const std::string	&Character::getName(void) const
{
    return (this->_name);
}

void				Character::equip(AMateria *m)
{
	int flag;

	flag = 0;
    for (int i = 0; i < 4; ++i)
    {
    	if (flag == 0 && _materia[i] == NULL)
    	{
    		flag++;
    		_materia[i] = m;
    	}
    }
}

void				Character::unequip(int idx)
{
	if (idx > 0 && idx < 4 && _materia[idx] != NULL)
	{
		_materia[idx] = NULL;
	}
}

void				Character::use(int idx, ICharacter &target)
{
    if (idx < 4 && idx >= 0 && _materia[idx] != NULL)
    {
        _materia[idx]->use(target);
        _materia[idx] = NULL;
    }
}
