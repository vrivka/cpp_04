#include "Dog.hpp"

void Dog::makeSound() const { std::cout << this->type << " says WOOF" << std::endl; }

Dog::Dog() : Animal("Dog") { std::cout << "Dog reveals\n"; }

Dog::Dog( Dog const &other ) : Animal(other) { std::cout << "Copy Dog reveals\n"; }

Dog::~Dog() { std::cout << "Dog disappear\n"; }

Dog &Dog::operator=( Dog const &other ) {
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}
