
#include "header.h"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria(){
}

AMateria::AMateria(const AMateria &ob)
{
	this->type = ob.type;
}

AMateria & AMateria::operator=(const AMateria &ob)
{
	this->type = ob.type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return(type);
}


void	AMateria::use(ICharacter & target)
{
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
	else if (this->getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}