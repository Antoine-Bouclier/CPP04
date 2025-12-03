#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#define BLUE "\033[34m"
#define RESET "\033[0m"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		/* -- Constructors -- */
		Cat();
		Cat(std::string type);

		/* -- Copy Constructor -- */
		Cat(const Cat	&copy);

		/* -- Assignement operator -- */
		Cat& operator=(const Cat &src);

		/* -- Destructor -- */
		virtual ~Cat();

		/* -- Getter -- */
		Brain*	getBrain() const;

		virtual void	makeSound() const;
};


#endif