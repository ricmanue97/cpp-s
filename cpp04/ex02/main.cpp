
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const AAnimal* d = new Dog();
	const AAnimal* c = new Cat();

	std::cout << d->getType() << " says: " << std::endl;
	d->makeSound();
	std::cout << c->getType() << " says: " << std::endl;
	c->makeSound();

	delete d;
	delete c;

	std::cout << "\n-- array test --\n" << std::endl;
	const int N = 4;
	AAnimal* animals[N];

	for (int i = 0; i < N; ++i)
		animals[i] = (i < N/2) ? static_cast<AAnimal*>(new Dog()) : static_cast<AAnimal*>(new Cat());

	for (int i = 0; i < N; ++i) {
		std::cout << animals[i]->getType() << " says: " << std::endl;
		animals[i]->makeSound();
	}

	for (int i = 0; i < N; ++i)
		delete animals[i];

	return 0;
}