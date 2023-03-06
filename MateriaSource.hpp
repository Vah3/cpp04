# pragma once 

# include "IMateriaSource.hpp"
# include "header.h"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &);
		MateriaSource &operator=(const MateriaSource &);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};