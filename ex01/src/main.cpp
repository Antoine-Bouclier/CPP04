#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
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
		a[i].
	}

	for (int i = 0; i < 20; i++)
	{
		delete a[i];
	}

	return 0;
}