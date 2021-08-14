#include "Cat.hpp"

void Cat::makeSound() const {
	std::cout << this->type << " says MOEW" << std::endl;
}

Cat::Cat() : Animal("Cat") {}

Cat::Cat( Cat const &other ) : Animal(other) {}

Cat::~Cat() {}

Cat &Cat::operator=( Cat const &other ) {
	this->type = other.type;
	return *this;
}
