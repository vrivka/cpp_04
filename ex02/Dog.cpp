#include "Dog.hpp"

std::string Dog::get42idea() const {
	return this->brain->getIdea(42);
}

void Dog::makeSound() const {
	std::cout << this->type << " says WUF" << std::endl;
}

Dog::Dog() : Animal() {
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog wagging its tail!\n";
}

Dog::Dog( Dog const &other ) {
	*this = other;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog gone into the sunset!\n";
}

Dog &Dog::operator=( Dog const &other ) {
	delete this->brain;
	this->brain = other.brain;
	this->type = other.type;
	return *this;
}