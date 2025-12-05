#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

#define RED "\033[31m"
#define RESET "\033[0m"

class Dog : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		/* -- Constructors -- */
		Dog();

		/* -- Copy Constructor -- */
		Dog(const Dog	&copy);

		/* -- Assignement operator -- */
		Dog& operator=(const Dog &src);

		/* -- Destructor -- */
		~Dog();

		/* -- Getter -- */
		Brain*	getBrain() const;

		virtual void	makeSound() const;
};


#endif