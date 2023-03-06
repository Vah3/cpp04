# pragma once

#include "header.h"

class Character : public ICharacter
{
	public:
		Character(std::string const &name);
		Character(const Character &ob);
		Character &operator=(const Character & ob);
		virtual ~Character();
		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};
