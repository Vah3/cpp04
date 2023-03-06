# include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	
}

Ice::~Ice(){	
}

Ice::Ice(const Ice &ob) : AMateria(ob)
{
	this->type = ob.type;
}

Ice &Ice::operator=(const Ice &ob)
{
	this->type = ob.type;
	return *this;
}

AMateria *Ice::clone()const{
	AMateria *new_ob;

	new_ob = new Ice(*this);
	return (new_ob);
}