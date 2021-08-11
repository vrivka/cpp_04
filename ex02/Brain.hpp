#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
protected:
	std::string ideas[100];
public:
	std::string getIdea( int ) const;
	Brain();
	Brain( Brain const & );
	~Brain();
	Brain &operator=( Brain const & );
};


#endif
