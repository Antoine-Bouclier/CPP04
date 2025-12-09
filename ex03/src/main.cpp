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

int	deepCopyCharacter()
{
	Character*		char1 = new Character("Char1");
	Character*		char2 = new Character("tmp");
	IMateriaSource*	src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	AMateria* tmpIce = src->createMateria("ice");
	AMateria* tmpCure = src->createMateria("cure");
	
	char1->equip(tmpIce);
	char1->equip(tmpCure);
	char1->unequip(1);
	*char2 = *char1;
	char1->equip(src->createMateria("cure"));

	std::cout << GREEN "char1: " RESET;
	char1->use(0, *char2);
	std::cout << GREEN "char1: " RESET;
	char1->use(1, *char2);

	std::cout << YELLOW "char2: " RESET;
	char2->use(0, *char1);
	std::cout << YELLOW "char2: " RESET;
	char2->use(1, *char1);

	delete src;
	delete char1;
	delete char2;
	return (0);
}

int	slotsLimits()
{
	Character*		char1 = new Character("char1");
	Character*		char2 = new Character("tmp");
	IMateriaSource*	src = new MateriaSource();
	AMateria*		m;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			m = src->createMateria("ice");
		else
			m = src->createMateria("cure");
		char1->equip(m);
	}

	for (int i = 0; i < 10; i++)
	{
		char1->use(i, *char2);
	}

	delete src;
	delete char1;
	delete char2;
	return (0);
}

int	floorLimits()
{
	Character*		char1 = new Character("char1");
	Character*		char2 = new Character("tmp");
	IMateriaSource*	src = new MateriaSource();
	AMateria*		m;

	src->learnMateria(new Ice());

	for (int i = 0; i < 110; i++)
	{
		std::cout << i << ": ";
		m = src->createMateria("ice");
		char1->equip(m);
		char1->unequip(0);
	}

	delete src;
	delete char1;
	delete char2;
	return (0);
}

int	CharacterShareMateria()
{
	Character*		char1 = new Character("char1");
	Character*		char2 = new Character("char2");
	IMateriaSource*	src = new MateriaSource();
	AMateria*		m;

	src->learnMateria(new Ice());
	m = src->createMateria("ice");

	char1->equip(m);
	char2->equip(m);

	char1->use(0, *char2);
	char2->use(0, *char1);

	delete src;
	delete char1;
	delete char2;
	return (0);
}

int	deepCopyMateria()
{
	Character*		char1 = new Character("char1");
	Character*		char2 = new Character("char2");
	IMateriaSource*	src = new MateriaSource();

	src->learnMateria(new Ice());
	char1->equip(src->createMateria("ice"));
	char1->equip(src->createMateria("ice"));
	char1->equip(src->createMateria("ice"));
	char1->equip(src->createMateria("ice"));

	char1->unequip(0);
	char1->unequip(2);

	char1->use(1, *char2);
	char1->use(3, *char2);

	std::cout << "unequipped slot: ";
	char1->use(0, *char2);
	char1->use(2, *char2);	

	delete src;
	delete char1;
	delete char2;
	return (0);
}

int	equipNull()
{
	Character*	char1 = new Character("char1");
	Character*	char2 = new Character("char2");

	char1->equip(NULL);

	char1->use(1, *char2);

	delete char1;
	delete char2;
	return (0);
}


int main()
{
	// Test 1: createMateria before learnMateria and use it
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

	// Test 6: deep copy Character
	std::cout << "TEST 6: deep copy Character" << std::endl;
	deepCopyCharacter();
	std::cout << std::endl;

	// Test 7: test the limits of the slots
	std::cout << "TEST 7: test the limits of the slots" << std::endl;
	slotsLimits();
	std::cout << std::endl;

	// Test 8: test the limits of the floor
	std::cout << "TEST 8: test the limits of the floor" << std::endl;
	floorLimits();
	std::cout << std::endl;

	// Test 9: Characters share the same materiaSource
	std::cout << "TEST 9: Characters share the same materiaSource" << std::endl;
	CharacterShareMateria();
	std::cout << std::endl;

	// Test 10: deep copy materia
	std::cout << "TEST 10: deep copy materia" << std::endl;
	deepCopyMateria();
	std::cout << std::endl;

	// Test 11: deep copy materia
	std::cout << "TEST 11: Character->equip(NULL)" << std::endl;
	equipNull();
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
