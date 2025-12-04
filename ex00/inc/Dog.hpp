#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

#define RED "\033[31m"
#define RESET "\033[0m"

class Dog : public Animal
{
	public:
		/* -- Constructors -- */
		Dog();

		/* -- Copy Constructor -- */
		Dog(const Dog	&copy);

		/* -- Assignement operator -- */
		Dog& operator=(const Dog &src);

		/* -- Destructor -- */
		virtual ~Dog();

		virtual void	makeSound() const;
};


#endif