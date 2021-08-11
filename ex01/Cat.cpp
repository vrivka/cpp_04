#include "Cat.hpp"

void Cat::makeSound() const {
	std::cout << this->type << " says MEOW" << std::endl;
}

std::string Cat::get42idea() const {
	return this->brain->getIdea(42);
}

Cat::Cat() : Animal() {
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat on the field!\n";
}

Cat::Cat( Cat const &other ) {
	*this = other;
	std::cout << "Copy Cat on the field!\n";
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat has left the building!\n";
}

Cat &Cat::operator=( Cat const &other ) {
	delete this->brain;
	this->brain = other.brain;
	this->type = other.type;
	return *this;
}
