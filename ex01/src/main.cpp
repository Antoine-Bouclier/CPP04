#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		// Test requested in the subject
		std::cout << "TEST requested in the subject" << std::endl;
		Animal*	a[20];

		for (int i = 0; i < 20; i++)
		{
			if (i % 2)
				a[i] = new Dog();
			else
				a[i] = new Cat();
		}

		for (int i = 0; i < 20; i++)
		{
			a[i]->makeSound();
		}

		for (int i = 0; i < 20; i++)
		{
			delete a[i];
		}
		std::cout << std::endl;
	}

	{
		// Test verification polymorphism
		std::cout << "TEST polymorphism" << std::endl;
		Animal*	b = new Dog();
		Animal* c = b;
		Animal* d = new Cat();

		b->makeSound();
		c->makeSound();
		d->makeSound();

		delete d;

		d = c;

		d->makeSound();

		delete b;
		std::cout << std::endl;
	}

	{
		// test deep copy
		std::cout << "TEST deep copy" << std::endl;
		Dog*	dog1 = new Dog();
		
		dog1->makeSound();
		dog1->getBrain()->setIdea("manger");
		dog1->getBrain()->setIdea("dormir");
		
		std::cout << "dog1 idea[0]	" << dog1->getBrain()->getIdea(0) << std::endl; 
		std::cout << "dog1 idea[1]	" << dog1->getBrain()->getIdea(1) << std::endl;

		Dog*	dog2 = new Dog(*dog1);

		dog2->getBrain()->setIdea("jouer");

		std::cout << "dog1 idea[2]	" << dog1->getBrain()->getIdea(2) << std::endl;
		std::cout << "dog2 idea[2]	" << dog2->getBrain()->getIdea(2) << std::endl;
		

		delete	dog1;

		std::cout << "dog2 idea[0]	" << dog2->getBrain()->getIdea(0) << std::endl; 
		std::cout << "dog2 idea[1]	" << dog2->getBrain()->getIdea(1) << std::endl;
		std::cout << "dog2 idea[2]	" << dog2->getBrain()->getIdea(2) << std::endl;

		delete	dog2;
		std::cout << std::endl;
	}

	{
		std::cout << "TEST assignement operator" << std::endl;
		Dog*	dog1 = new Dog();
		
		dog1->makeSound();
		dog1->getBrain()->setIdea("manger");
		dog1->getBrain()->setIdea("dormir");
		
		std::cout << "dog1 idea[0]	" << dog1->getBrain()->getIdea(0) << std::endl; 
		std::cout << "dog1 idea[1]	" << dog1->getBrain()->getIdea(1) << std::endl;

		Dog*	dog2 = new Dog();
		*dog2 = *dog1;

		dog2->getBrain()->setIdea("jouer");

		std::cout << "dog2 idea[2]	" << dog2->getBrain()->getIdea(2) << std::endl;
		std::cout << "dog1 idea[2]	" << dog1->getBrain()->getIdea(2) << std::endl;
		

		delete	dog1;

		std::cout << "dog2 idea[0]	" << dog2->getBrain()->getIdea(0) << std::endl; 
		std::cout << "dog2 idea[1]	" << dog2->getBrain()->getIdea(1) << std::endl;
		std::cout << "dog2 idea[2]	" << dog2->getBrain()->getIdea(2) << std::endl;

		delete	dog2;
		std::cout << std::endl;
	}

	return 0;
}