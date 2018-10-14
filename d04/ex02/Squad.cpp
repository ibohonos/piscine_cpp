#include "Squad.hpp"
#include <iostream>

Squad::Squad( void )
{
	_list = NULL;
	_nb = 0;
}

Squad::Squad( Squad const & src )
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = _list;
	tmp2 = src._list;
	_list = NULL;
	while (tmp2)
	{
		if (_list == NULL)
		{
			_list = new(t_list);
			_list->data = tmp2->data;
			_list->next = NULL;
		}
		else
		{
			tmp = _list;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new(t_list);
			tmp->next->data = tmp2->data;
			tmp->next->next = NULL;
		}
		tmp2 = tmp2->next;
	}
	this->_nb = src._nb;
}


Squad&  Squad::operator=(Squad const & rhs)
{
    t_list  *tmp;

    tmp= _list;
    while (tmp)
    {
		delete tmp->data;
    }

	t_list	*tmp2;

	tmp = _list;
	tmp2 = rhs._list;
	_list = NULL;
	while (tmp2)
	{
		if (_list == NULL)
		{
			_list = new(t_list);
			_list->data = tmp2->data;
			_list->next = NULL;
		}
		else
		{
			tmp = _list;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new(t_list);
			tmp->next->data = tmp2->data;
			tmp->next->next = NULL;
		}
		tmp2 = tmp2->next;
	}
	this->_nb = rhs._nb;
    return *this;
}

Squad::~Squad( void )
{
	t_list	*tmp;

	while (_list)
	{
		tmp = _list;
		delete _list->data;
		_list = _list->next;
		delete tmp;
	}
}

int		Squad::getCount( void ) const
{
	return _nb;
}

ISpaceMarine*	Squad::getUnit( int index ) const
{
	t_list	*tmp;

	tmp = _list;
	while (index != 0 && tmp)
	{
		tmp = tmp->next;
		index--;
	}
	return (tmp->data);
}


int		Squad::push( ISpaceMarine* sm )
{
	t_list	*tmp;

	if (sm == NULL)
		return (_nb);
	if (_list == NULL)
	{
		_list = new(t_list);
		_list->data = sm;
		_list->next = NULL;
	}
	else
	{
		tmp = _list;
		while (tmp->next)
		{
			if (tmp->data == sm)
				return (_nb);
			tmp = tmp->next;
		}
		tmp->next = new(t_list);
		tmp->next->data = sm;
		tmp->next->next = NULL;
	}
	_nb++;
	return (_nb);
}
