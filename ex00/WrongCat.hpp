#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	virtual void makeSound() const;
	WrongCat();
	WrongCat( WrongCat const & );
	~WrongCat();
	WrongCat &operator=( WrongCat const & );
};


#endif
