#include "Cat.hpp"
#include "Dog.hpp"

void	cat()
{
	std::cout << "-- Creation of the cat --" << std::endl;
	Cat		cat;
	std::cout << std::endl;

	std::cout << "-- Making sound --" << std::endl;
	cat.makeSound();
	std::cout << std::endl;

	std::cout << "-- Kiling cat --" << std::endl;
}

void	catPointer()
{
	Cat*	cat[2];
	
	std::cout << "-- Creation of the cats --" << std::endl;
	cat[0] = new Cat();
	cat[1] = new Cat();
	std::cout << std::endl;

	std::cout << "-- Making sound --" << std::endl;
	cat[0]->makeSound();
	cat[1]->makeSound();
	std::cout << std::endl;

	std::cout << "-- Kiling cats --" << std::endl;
	delete cat[0];
	delete cat[1];
	std::cout << std::endl;
}

void	dog()
{
	std::cout << "-- Creation of the dog --" << std::endl;
	Dog		dog;
	std::cout << std::endl;

	std::cout << "-- Making sound --" << std::endl;
	dog.makeSound();
	std::cout << std::endl;

	std::cout << "-- Kiling dog --" << std::endl;
}

void	dogPointer()
{
	Dog*	dog[2];
	
	std::cout << "-- Creation of the dogs --" << std::endl;
	dog[0] = new Dog();
	dog[1] = new Dog();
	std::cout << std::endl;

	std::cout << "-- Making sound --" << std::endl;
	dog[0]->makeSound();
	dog[1]->makeSound();
	std::cout << std::endl;

	std::cout << "-- Kiling dogs --" << std::endl;
	delete dog[0];
	delete dog[1];
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << "-- TEST CAT --" << std::endl << std::endl;
	cat();
	std::cout << std::endl;
	catPointer();

	std::cout << "-- TEST DOG --" << std::endl << std::endl;
	dog();
	std::cout << std::endl;
	dogPointer();
}