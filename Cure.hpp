# pragma once

#include "header.h"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &);
		Cure &operator=(const Cure &);
		AMateria* clone()const;
};
