#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *brain;
public:
	virtual void makeSound() const;
	std::string getIdea( int ) const;
	void setIdea( int, std::string const & );
	Cat();
	Cat( Cat const & );
	virtual ~Cat();
	Cat &operator=( Cat const & );
};


#endif
