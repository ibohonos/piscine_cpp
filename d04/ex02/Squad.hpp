#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	typedef struct s_list
	{
		ISpaceMarine	*data;
		s_list			*next;
	}				t_list;

	private:
		int		_nb;
		t_list	*_list;

	public:

		Squad( void );
		Squad( Squad const & src );
		~Squad( void );

		int		getCount() const;
		ISpaceMarine*	getUnit( int index ) const;
		int		push(ISpaceMarine* sm );
	
		Squad& operator=(Squad const & rhs);
};

#endif
