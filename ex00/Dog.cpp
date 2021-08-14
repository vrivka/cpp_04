#include "Dog.hpp"

void Dog::makeSound() const {
	std::cout << this->type << " says WOOF" << std::endl;
}

Dog::Dog() : Animal("Dog") {}

Dog::Dog( Dog const &other ) : Animal(other) {}

Dog::~Dog() {}

Dog &Dog::operator=( Dog const &other ) {
	this->type = other.type;
	return *this;
}
