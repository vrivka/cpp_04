#include "Dog.hpp"

void Dog::makeSound() const { std::cout << this->type << " says WOOF\n"; }

std::string Dog::getIdea( int index) const { return this->brain->getIdea(index); }

void Dog::setIdea( int index, std::string const &idea ) { this->brain->setIdea(index, idea); }

Dog::Dog() : Animal("Dog"), brain(new Brain()) { std::cout << "Dog reveals\n"; }

Dog::Dog( Dog const &other ) : Animal(other), brain(new Brain()) {
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, other.brain->getIdea(i));
	std::cout << "Copy Dog reveals\n";
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog disappear\n";
}

Dog &Dog::operator=( Dog const &other ) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, other.brain->getIdea(i));
	this->type = other.type;
	return *this;
}
