# include "header.h"

// int main(void)
// {
// 	{

// 	AMateria* ob = new Ice;
// 	AMateria* ob1 = new Ice;
// 	AMateria* ob2 = new Cure;
// 	AMateria* ob3 = new Ice;

// 	std::cout << ob2->getType() << std::endl;
// 	Character darak("darak");

// 	darak.equip(ob);
// 	darak.equip(ob1);
// 	darak.equip(ob2);
// 	darak.equip(ob3);
// 	darak.unequip(2);
// 	darak.equip(ob1);
// 	darak.use(2, darak);
// 	darak.equip(ob->clone());
// 	darak.use(7, darak);
// 	ob = NULL;
// 	ob1 = NULL;
// 	ob2 = NULL;
// 	ob3 = NULL;
// 	}
// 	{

// 	while(1);
// 	}
// 	//delete ob;
// }

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}