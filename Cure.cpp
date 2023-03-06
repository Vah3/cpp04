# include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	
}

Cure::~Cure(){	
}

Cure::Cure(const Cure &ob) : AMateria(ob)
{
	this->type = ob.type;
}

Cure &Cure::operator=(const Cure &ob)
{
	this->type = ob.type;
	return *this;
}

AMateria *Cure::clone()const{
	AMateria *new_ob;

	new_ob = new Cure(*this);
	return (new_ob);
}