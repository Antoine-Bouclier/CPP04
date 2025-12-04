#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const Cat*		k = new Cat();
	const Dog*		l = new Dog();
	const Animal*	m = l;
	const Animal*	n = k;
	const WrongAnimal*	o = new WrongCat();
	std::cout << RED << j->getType() << " " RESET<< std::endl;
	std::cout << BLUE << i->getType() << " " RESET<< std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	k->makeSound();
	l->makeSound();
	m->makeSound();
	n->makeSound();
	std::cout << o->getType() << " " << std::endl;
	o->makeSound();
	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
	return 0;
}