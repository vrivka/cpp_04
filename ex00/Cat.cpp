#include "Cat.hpp"

void Cat::makeSound() const { std::cout << this->type << " says MOEW" << std::endl; }

Cat::Cat() : Animal("Cat") { std::cout << "Cat reveals\n"; }

Cat::Cat( Cat const &other ) : Animal(other) { std::cout << "Copy Cat reveals\n"; }

Cat::~Cat() { std::cout << "Cat disappear\n"; }

Cat &Cat::operator=( Cat const &other ) {
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}
