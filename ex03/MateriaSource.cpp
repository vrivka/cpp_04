#include "MateriaSource.hpp"

AMateria *MateriaSource::createMateria( std::string const &type ) {
	for (int idx = 0; idx < 4; idx++)
		if (this->sourceSlot[idx] && this->sourceSlot[idx]->getType() == type)
			return this->sourceSlot[idx]->clone();
	return nullptr;
}

void MateriaSource::learnMateria( AMateria *materia ) {
	for (int idx = 0; idx < 4; idx++)
		if (!this->sourceSlot[idx]) {
			this->sourceSlot[idx] = materia;
			return ;
		}
}

MateriaSource::MateriaSource() {
	for (int idx = 0; idx < 4; idx++)
		this->sourceSlot[idx] = nullptr;
}

MateriaSource::MateriaSource( MateriaSource const &other ) {
	for (int idx = 0; idx < 4; idx++)
		if (other.sourceSlot[idx])
			this->sourceSlot[idx] = other.sourceSlot[idx]->clone();
		else
			this->sourceSlot[idx] = nullptr;
}

MateriaSource::~MateriaSource() {
	for (int idx = 0; idx < 4; idx++)
		if (this->sourceSlot[idx])
			delete this->sourceSlot[idx];
}

MateriaSource &MateriaSource::operator=( MateriaSource const &other ) {
	if (this == &other)
		return *this;
	for (int idx = 0; idx < 4; idx++)
		if (this->sourceSlot[idx]) {
			delete this->sourceSlot[idx];
			this->sourceSlot[idx] = nullptr;
		}
	for (int idx = 0; idx < 4; idx++)
		if (other.sourceSlot[idx])
			this->sourceSlot[idx] = other.sourceSlot[idx]->clone();
	return *this;
}
