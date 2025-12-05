#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal*	meta = new Animal();
	const Animal*	dog1 = new Dog();
	const Dog*		dog2 = new Dog();
	const Animal*	cat1 = new Cat();
	const Cat*		cat2 = new Cat();
	const Animal*	dog3 = dog2;
	const Animal*	cat3 = cat2;
	const WrongAnimal*	wrong1 = new WrongCat();
	const WrongCat*		wrong2 = new WrongCat();
	std::cout << RED << dog1->getType() << ": " RESET;
	dog1->makeSound();
	std::cout << BLUE << cat1->getType() << ": " RESET;
	cat1->makeSound();
	std::cout << RED << dog1->getType() << ": " RESET;
	dog2->makeSound();
	std::cout << BLUE << cat1->getType() << ": " RESET;
	cat2->makeSound();
	std::cout << RED << dog1->getType() << ": " RESET;
	dog3->makeSound();
	std::cout << BLUE << cat1->getType() << ": " RESET;
	cat3->makeSound();
	std::cout << GREEN << meta->getType() << ": " RESET;
	meta->makeSound();
	std::cout << wrong1->getType() << ": ";
	wrong1->makeSound();
	std::cout << wrong2->getType() << ": ";
	wrong2->makeSound();
	delete meta;
	delete cat1;
	delete cat2;
	delete dog1;
	delete dog2;
	delete wrong1;
	delete wrong2;
	return 0;
}