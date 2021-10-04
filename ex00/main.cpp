#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	Animal const *meta = new Animal();
	Animal const *d = new Dog();
	Animal const *c = new Cat();

	std::cout << d->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	c->makeSound();
	d->makeSound();
	meta->makeSound();
	delete meta;
	delete c;
	delete d;

	WrongAnimal const *wc = new WrongCat();

	wc->makeSound();
	delete wc;
}
