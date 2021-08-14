#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

#define ANIMALS_COUNT 10

int main() {
	Animal *animals[ANIMALS_COUNT];
	int half = ANIMALS_COUNT / 2;
	int i = 0;

	for (; i < half; i++)
		animals[i] = new Dog();
	for (; i < ANIMALS_COUNT; i++)
		animals[i] = new Cat();
	for (i = 0; i < ANIMALS_COUNT; i++)
		delete animals[i];

	std::cout << std::endl;

	Cat *cat = new Cat();
	Dog *dog = new Dog();
	Dog *ddog = new Dog();

	*ddog = *dog;
	std::cout << dog->getIdea(0) << '\n';
	std::cout << ddog->getIdea(0) << '\n';
	dog->setIdea(0, "play");
	std::cout << dog->getIdea(0) << '\n';
	std::cout << ddog->getIdea(0) << '\n';
	*ddog = *dog;
	std::cout << dog->getIdea(0) << '\n';
	std::cout << ddog->getIdea(0) << '\n';
	ddog->setIdea(0, "walk");
	std::cout << dog->getIdea(0) << '\n';
	std::cout << ddog->getIdea(0) << '\n';
	cat->makeSound();
	dog->makeSound();
	ddog->makeSound();
	delete cat;
	delete dog;
	delete ddog;
}
