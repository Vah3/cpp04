
#include "header.h"

Character::Character(std::string const & name){
	this->name = name;
	for(int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
}

Character::Character(const Character & ob){
	this->name = ob.name;
	for(int i = 0; i < 4; i++)
	{
		inventory[i] = ob.inventory[i]->clone();
	}
}
// check self assignment
Character & Character::operator=(const Character &ob)
{
	this->name = ob.name;
	for(int i = 0; i < 4; i++)
	{
		inventory[i] = ob.inventory[i]->clone();
	}
	return *this;
}

Character::~Character()
{
	for(int i = 0;i < 4; i++)
	{
		//delete inventory[i];
	//	this->inventory[i] = NULL;
		}
}

void	Character::equip(AMateria *m)
{
	for(int i = 0; i < 5; i++)
	{
		if (inventory[i] == m)
		{
			std::cout << this->getName() << " already has this " << m->getType() << " object" << std::endl;
			return ;			
		}
		if (i == 4)
		{
			std::cout << "is full" << std::endl;
			return ;
		}
		if (inventory[i] == NULL)
			break ;
	}
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break ;
		}
	}

}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "wrong range" << std::endl;
		return ;
	}
	if (inventory[idx] == NULL)
	{
		std::cout << "slot is empty" << std::endl;
	}
	else
	{
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "wrong range" << std::endl;
		return ;
	}
	if (inventory[idx] == NULL)
	{
		std::cout << "slot is empty" << std::endl;
	}
	else
	{
		inventory[idx]->use(target);
	}
}

std::string const & Character::getName() const
{
	return(name);
}
