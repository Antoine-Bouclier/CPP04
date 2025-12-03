#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#define RED "\033[32m"
#define RESET "\033[0m"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	public:
		/* -- Constructors -- */
		Dog();
		Dog(std::string type);

		/* -- Copy Constructor -- */
		Dog(const Dog	&copy);

		/* -- Assignement operator -- */
		Dog& operator=(const Dog &src);

		/* -- Destructor -- */
		virtual ~Dog();

		/* -- Getter -- */
		Brain*	getBrain() const;

		virtual void	makeSound() const;
};


#endif