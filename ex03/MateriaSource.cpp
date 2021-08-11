#include "MateriaSource.hpp"

AMateria *MateriaSource::createMateria( std::string const &type ) {
	for (int idx = 0; idx < 4; idx++)
		if (this->sourceSlot[idx] && this->sourceSlot[idx]->getType() == type)
			return this->sourceSlot[idx]->clone();
	return 0;
}

void MateriaSource::learnMateria( AMateria *materia ) {
	for (int idx = 0; idx < 4; idx++)
		if (!this->sourceSlot[idx]) {
			this->sourceSlot[idx] = materia;
			return ;
		}
}

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource constructorS\n";
	for (int idx = 0; idx < 4; idx++)
		this->sourceSlot[idx] = NULL;
	std::cout << "MateriaSource constructorF\n";
}

MateriaSource::MateriaSource( MateriaSource const &other ) {
	std::cout << "MateriaSource copy constructorS\n";
	*this = other;
	std::cout << "MateriaSource copy constructorF\n";
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructorS\n";
	for (int idx = 0; idx < 4; idx++)
		if (this->sourceSlot[idx])
			delete this->sourceSlot[idx];
	std::cout << "MateriaSource destructorF\n";
}

MateriaSource &MateriaSource::operator=( MateriaSource const &other ) {
	for (int idx = 0; idx < 4; idx++)
		if (this->sourceSlot[idx])
			delete this->sourceSlot[idx];
	for (int idx = 0; idx < 4; idx++)
		this->sourceSlot[idx] = other.sourceSlot[idx];
	return *this;
}
