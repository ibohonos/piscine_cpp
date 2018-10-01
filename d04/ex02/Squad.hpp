#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp"

class Squad : public ISquad {
	private:
		typedef struct 	s_list {
			ISpaceMarine	*m;
			s_list			*next;
		}				t_list;

		int		_units;
		t_list	*_marines;

	public:
		Squad();
		Squad(Squad const &rfs);
		virtual ~Squad();

		Squad &operator=(Squad const &frs);

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);
};

#endif