#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *brain;
public:
	void makeSound() const;
	std::string get42idea() const;
	Dog();
	Dog( Dog const & );
	~Dog();
	Dog &operator=( Dog const & );
};


#endif
