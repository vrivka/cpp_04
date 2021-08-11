#include "Character.hpp"

std::string const &Character::getName() const {
	return this->Name;
}

void Character::equip( AMateria *m ) {
	std::cout << m->getType() << '\n';
	for(int idx = 0; idx < 4; idx++)
		if (this->inventorySlot[idx] == NULL) {
			this->inventorySlot[idx] = m;
			return ;
		}
}

void Character::unequip( int idx ) {
	if (idx < 0  || idx > 3)
		return ;
	this->inventorySlot[idx] = NULL;
}

void Character::use( int idx, ICharacter &target ) {
	this->inventorySlot[idx]->use(target);
}

Character::Character() : Name("nameless") {
	std::cout << "Character constructorS\n";
	for (int idx = 0; idx < 4; idx++)
		this->inventorySlot[idx] = NULL;
	std::cout << "Character constructorF\n";
}

Character::Character( const std::string &name ) : Name(name) {
	std::cout << "Character name constructorS\n";
	for (int idx = 0; idx < 4; idx++)
		this->inventorySlot[idx] = NULL;
	std::cout << "Character name constructorF\n";
}

Character::Character( Character const &other ) {
	std::cout << "Character copy constructorS\n";
	for (int idx = 0; idx < 4; idx++)
		if (this->inventorySlot[idx])
			delete this->inventorySlot[idx];
	*this = other;
	std::cout << "Character copy constructorF\n";
}

Character::~Character() {
	std::cout << "Character destructorS\n";
	for (int idx = 0; idx < 4; idx++)
		if (this->inventorySlot[idx])
			delete this->inventorySlot[idx];
	std::cout << "Character destructorF\n";
}

Character &Character::operator=( Character const &other ) {
	for (int idx = 0; idx < 4; idx++)
		if (this->inventorySlot[idx])
			delete this->inventorySlot[idx];
	for (int idx = 0; idx < 4; idx++)
		this->inventorySlot[idx] = other.inventorySlot[idx];
	return *this;
}
