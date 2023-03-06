# include "header.h"

int main(void)
{
	{

	AMateria* ob = new Ice;
	AMateria* ob1 = new Ice;
	AMateria* ob2 = new Cure;
	AMateria* ob3 = new Ice;

	std::cout << ob2->getType() << std::endl;
	Character darak("darak");

	darak.equip(ob);
	darak.equip(ob1);
	darak.equip(ob2);
	darak.equip(ob3);
	darak.unequip(2);
	darak.equip(ob1);
	darak.use(2, darak);
	darak.equip(ob->clone());
	darak.use(7, darak);
	ob = NULL;
	ob1 = NULL;
	ob2 = NULL;
	ob3 = NULL;
	}
	{

	while(1);
	}
	//delete ob;
}