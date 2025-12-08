#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Colors.hpp"


int learnCreateUse()
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* char1 = new Character("Char1");
	ICharacter* char2 = new Character();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria* tmpIce = src->createMateria("ice");
	AMateria* tmpCure = src->createMateria("cure");

	char1->equip(tmpIce);
	char1->equip(tmpCure);

	char1->use(0, *char2);
	char1->use(1, *char2);

	delete src;
	delete char1;
	delete char2;

	return 0;
}

int createBeforeLearn()
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* char1 = new Character("Char1");
	ICharacter* char2 = new Character();

	AMateria* tmpIce = src->createMateria("ice");
	AMateria* tmpCure = src->createMateria("cure");

	char1->equip(tmpIce);
	char1->equip(tmpCure);

	char1->use(0, *char2);
	char1->use(1, *char2);

	delete src;
	delete char1;
	delete char2;

	return 0;
}

int unequipNothing()
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* char1 = new Character("Char1");
	ICharacter* char2 = new Character();

	char1->use(0, *char2);
	char1->use(1, *char2);

	delete src;
	delete char1;
	delete char2;

	return 0;
}

int unequip()
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* char1 = new Character("Char1");
	ICharacter* char2 = new Character();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria* tmpIce = src->createMateria("ice");
	AMateria* tmpCure = src->createMateria("cure");

	char1->equip(tmpIce);
	char1->equip(tmpCure);

	char1->use(0, *char2);
	char1->use(1, *char2);

	char1->unequip(0);
	char1->unequip(1);

	// delete materia on the floor
	Character*	real = static_cast<Character*>(char1);
	AMateria* const*	floor = real->getFloor();
	for (int i = 0; i < real->getFloorCount(); i++)
		delete (floor[i]);

	delete src;
	delete char1;
	delete char2;

	return 0;
}

int useNothing()
{
	ICharacter* char1 = new Character("Char1");
	ICharacter* char2 = new Character();

	char1->use(0, *char2);
	char1->use(1, *char2);

	delete char1;
	delete char2;

	return 0;
}

int	deepCopyMateria()
{
	ICharacter* char1 = new Character("Char1");
	ICharacter* char2 = new Character();
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	IMateriaSource* tmp = src;
	src->learnMateria(new Cure());

	AMateria* tmpIce = src->createMateria("ice");
	AMateria* tmpCure = src->createMateria("cure");

	AMateria* tmp2Ice = tmp->createMateria("ice");
	AMateria* tmp2Cure = tmp->createMateria("cure");

	char1->equip(tmpIce);
	char1->equip(tmpCure);

	char1->use(0, *char2);
	char1->use(1, *char2);

	char2->equip(tmp2Ice);
	char2->equip(tmp2Cure);

	char2->use(0, *char1);
	char2->use(1, *char1);

	delete src;
	delete char1;
	delete char2;
	return (0);
}

int	deepCopyCharacter()
{
	Character* char1 = new Character("Char1");
	Character* char2 = new Character("tmp");
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	AMateria* tmpIce = src->createMateria("ice");
	AMateria* tmpCure = src->createMateria("cure");
	
	char1->equip(tmpIce);
	char1->equip(tmpCure);
	char1->unequip(1);
	*char2 = *char1;
	char1->equip(tmpCure);

	std::cout << GREEN "char1: " RESET;
	char1->use(0, *char2);
	std::cout << GREEN "char1: " RESET;
	char1->use(1, *char2);

	std::cout << YELLOW "char2: " RESET;
	char2->use(0, *char1);
	std::cout << YELLOW "char2: " RESET;
	char2->use(1, *char1);

	// delete materia on the floor
	AMateria* const*	floor = char1->getFloor();
	for (int i = 0; i < char1->getFloorCount(); i++)
		delete (floor[i]);

	AMateria* const*	floor2 = char2->getFloor();
	for (int i = 0; i < char2->getFloorCount(); i++)
		delete (floor2[i]);

	delete src;
	delete char1;
	delete char2;
	return (0);
}


int main()
{
/* 	// Test 1: createMateria before learnMateria and use it
	std::cout << "TEST 1: createMateria before learnMateria and use it" << std::endl;
	createBeforeLearn();
	std::cout << std::endl;

	// test 2: Learn, create and use Materia
	std::cout << "TEST 2: Learn, create and use Materia" << std::endl;
	learnCreateUse();
	std::cout << std::endl;

	// Test 3: createMateria before learnMateria and use it
	std::cout << "TEST 3: unequip non existent Materia" << std::endl;
	unequipNothing();
	std::cout << std::endl;

	// Test 4: unequip materia
	std::cout << "TEST 4: unequip non existent Materia" << std::endl;
	unequip();
	std::cout << std::endl;

	// Test 5: use a non existent materia
	std::cout << "TEST 5: use a non existent materia" << std::endl;
	useNothing();
	std::cout << std::endl;

	// Test 6: deep copy materia
	std::cout << "TEST 6: deep copy materia" << std::endl;
	deepCopyMateria();
	std::cout << std::endl; */

	// Test 7: deep copy Character
	std::cout << "TEST 7: deep copy Character" << std::endl;
	deepCopyCharacter();
	std::cout << std::endl;
}

/* int main()
{
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
} */
