#include "Character.hpp"

std::string const &Character::getName() const {
	return this->Name;
}

void Character::equip( AMateria *materia ) {
	for(int idx = 0; idx < 4; idx++)
		if (this->inventorySlot[idx] == nullptr) {
			this->inventorySlot[idx] = materia;
			return ;
		}
}

void Character::unequip( int idx ) {
	if (idx < 0  || idx >= 4)
		return ;
	this->inventorySlot[idx] = nullptr;
}

void Character::use( int idx, ICharacter &target ) {
	if (idx < 0 || idx >= 4)
		return ;
	this->inventorySlot[idx]->use(target);
}

Character::Character() : Name("nameless") {
	for (int idx = 0; idx < 4; idx++)
		this->inventorySlot[idx] = nullptr;
}

Character::Character( const std::string &name ) : Name(name) {
	for (int idx = 0; idx < 4; idx++)
		this->inventorySlot[idx] = nullptr;
}

Character::Character( Character const &other ) : Name(other.Name) {
	for (int idx = 0; idx < 4; idx++)
		if (other.inventorySlot[idx])
			this->inventorySlot[idx] = other.inventorySlot[idx]->clone();
		else
			this->inventorySlot[idx] = nullptr;
}

Character::~Character() {
	for (int idx = 0; idx < 4; idx++)
		if (this->inventorySlot[idx])
			delete this->inventorySlot[idx];
}

Character &Character::operator=( Character const &other ) {
	if (this == &other)
		return *this;
	for (int idx = 0; idx < 4; idx++)
		if (this->inventorySlot[idx]) {
			delete this->inventorySlot[idx];
			this->inventorySlot[idx] = nullptr;
		}
	for (int idx = 0; idx < 4; idx++)
		if (other.inventorySlot[idx])
			this->inventorySlot[idx] = other.inventorySlot[idx]->clone();
	return *this;
}
