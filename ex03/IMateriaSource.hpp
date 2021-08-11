#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {
public:
	virtual ~IMateriaSource() { std::cout << "IMateriaSource destructor\n"; }
	virtual void learnMateria( AMateria * ) = 0;
	virtual AMateria *createMateria( std::string const & ) = 0;
};

#endif
