#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *brain;
public:
	void makeSound() const;
	std::string get42idea() const;
	Cat();
	Cat( Cat const & );
	~Cat();
	Cat &operator=( Cat const & );
};


#endif
