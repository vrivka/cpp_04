#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
	WrongAnimal( std::string const & );
public:
	std::string getType() const;
	void makeSound() const;
	WrongAnimal();
	WrongAnimal( WrongAnimal const & );
	virtual ~WrongAnimal();
	WrongAnimal &operator=( WrongAnimal const & );
};


#endif
