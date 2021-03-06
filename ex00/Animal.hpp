#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string type;
	Animal( std::string const & );
public:
	std::string getType() const;
	virtual void makeSound() const;
	Animal();
	Animal( Animal const & );
	virtual ~Animal();
	Animal &operator=( Animal const & );
};

#endif
