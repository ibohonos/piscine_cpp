#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i += 1)
    {
        this->_materia[i] = NULL;
    }
    return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    *this = src;
    return ;
}

MateriaSource &MateriaSource::operator= (const MateriaSource &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i += 1)
        {
            this->_materia[i] = NULL;
            this->_materia[i] = rhs._materia[0]->clone();
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
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

AMateria *MateriaSource::createMateria(const std::string &type)
{
    if (type == "ice")
    {
        return (new Ice());
    }
    else if (type == "cure")
    {
        return (new Cure());
    }
    return (NULL);
}
