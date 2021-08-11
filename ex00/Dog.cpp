#include "Dog.hpp"
#include "../ex01/Dog.hpp"

void Dog::makeSound() const {
	std::cout << this->type << " says WOOF" << std::endl;
}

Dog::Dog() : Animal() {
	this->type = "Dog";
}

Dog::Dog( Dog const &other ) {
	*this = other;
}

Dog::~Dog() {}

Dog &Dog::operator=( Dog const &other ) {
	this->type = other.type;
	return *this;
}
