#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "----- Basic polymorphism test -----\n";
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " says: "; j->makeSound();
	std::cout << i->getType() << " says: "; i->makeSound();
	std::cout << "Animal says: "; meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n----- Array of Animals -----\n";
	Animal* animals[4];
	for (int k = 0; k < 4; ++k)
		animals[k] = (k < 2) ? static_cast<Animal*>(new Dog()) : static_cast<Animal*>(new Cat());

	for (int k = 0; k < 4; ++k)
		animals[k]->makeSound();

	for (int k = 0; k < 4; ++k)
		delete animals[k];

	std::cout << "\n----- WrongAnimal (no virtual) test -----\n";
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << "WrongAnimal says: "; wa->makeSound();
	std::cout << "WrongCat (through WrongAnimal*) says: "; wc->makeSound();

	delete wa;
	delete wc;

	return 0;
}