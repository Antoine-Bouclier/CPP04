#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>

#define YELLOW "\033[33m"
#define RESET "\033[0m"

class Brain
{
	private:
		std::string		_ideas[100];
		unsigned int	_index;
	public:
	/* -- Constructors -- */
	Brain();
	
	/* -- Copy Constructor -- */
	Brain(const Brain &copy);
	
	/* -- Assignement operator -- */
	Brain& operator=(const Brain &src);

		/* -- Getters -- */
	const std::string	getidea(unsigned int i) const;

	/* -- Setters -- */
	void	setidea(const std::string &idea);
	
	/* -- Destructor -- */
	~Brain();
};

#endif