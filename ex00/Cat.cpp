#include "Cat.hpp"

void Cat::makeSound() const {
	std::cout << this->type << " says MOEW" << std::endl;
}

Cat::Cat() {
	this->type = "Cat";
}

Cat::Cat( Cat const &other ) {
	*this = other;
}

Cat::~Cat() {}

Cat &Cat::operator=( Cat const &other ) {
	this->type = other.type;
	return *this;
}
