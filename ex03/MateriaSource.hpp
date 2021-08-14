#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria *sourceSlot[4];
public:
	virtual void learnMateria( AMateria * );
	virtual AMateria* createMateria( std::string const & );
	MateriaSource();
	MateriaSource( MateriaSource const & );
	virtual ~MateriaSource();
	MateriaSource &operator=( MateriaSource const & );
};


#endif
