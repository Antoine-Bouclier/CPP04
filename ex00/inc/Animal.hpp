#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"

#define GREEN "\033[32m"
#define RESET "\033[0m"

class Animal
{
	protected:
		std::string	_type;
	public:
		/* -- Constructors -- */
		Animal();
		Animal(std::string type);

		/* -- Copy Constructor -- */
		Animal(const Animal	&copy);

		/* -- Assignement operator -- */
		Animal& operator=(const Animal &src);

		/* -- Destructor -- */
		virtual ~Animal();

		/* -- Getters -- */
		const std::string	getType() const;

		virtual void	makeSound() const;
};

#endif