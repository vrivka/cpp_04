#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

#define ANIMALS_COUNT 6

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
	Cat *cat = new Cat();
	Dog *dog = new Dog();

	cat->makeSound();
	dog->makeSound();
	std::cout << "42 idea of cat - " << cat->get42idea() << '\n';
	std::cout << "42 idea of cat - " << dog->get42idea() << '\n';
	delete cat;
	delete dog;
}
