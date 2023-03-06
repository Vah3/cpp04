# pragma once

#include "header.h"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &);
		Ice &operator=(const Ice &);
		AMateria* clone()const;
};
