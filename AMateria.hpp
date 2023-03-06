# pragma once

#include "header.h"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria &);
		AMateria &operator=(const AMateria &);
	//member function
		std::string const & getType() const;
		virtual	AMateria *clone() const = 0;
		virtual void use(ICharacter& target);
};
