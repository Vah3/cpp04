# include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
		for(int i = 0;i < 4; i++)
	{
		store[i] = NULL;
	}
}

MateriaSource::~MateriaSource(){
	for(int i = 0;i < 4; i++)
	{
		delete store[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &ob)
{
	for(int i = 0;i < 4; i++)
	{
		this->store[i] = ob.store[i]->clone();
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &ob)
{
	if (this == &ob)
	{
		return *this;
	}
	for(int i = 0;i < 4; i++)
	{
		delete store[i];
		this->store[i] = ob.store[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* ob)
{
	
	for(int i = 0; i < 5; i++)
	{
		if (i == 4)
		{
			std::cout << "is full" << std::endl;
			return ;
		}
		if (store[i] == NULL)
			break ;
	}
	for(int i = 0; i < 4; i++)
	{
		if (store[i] == NULL)
		{
			store[i] = ob;
			break ;
		}
	}		
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (store[i] != NULL && store[i]->getType() == type)
		{
			return (store[i]->clone());
		}
	}
	std::cout << "Materias not found" << std::endl;
	return NULL;
}
