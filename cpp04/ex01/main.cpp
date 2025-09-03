
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const int N = 6;
	Animal* animals[N];


	for (int i = 0; i < N; ++i) {
		if (i < N/2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}


	for (int i = 0; i < N; ++i) {
		std::cout << "Animal[" << i << "] type: " << animals[i]->getType() << " -> ";
		animals[i]->makeSound();
	}


	for (int i = 0; i < N; ++i)
		delete animals[i];

	std::cout << "=== Deep copy tests ===\n";


	Dog* dog1 = new Dog();

	dog1->getBrain()->ideas[0] = "I want a bone";
	Dog* dog2 = new Dog(*dog1);
	dog1->getBrain()->ideas[0] = "I want meat";

	std::cout << "dog1 idea[0]: " << dog1->getBrain()->ideas[0] << '\n';
	std::cout << "dog2 idea[0]: " << dog2->getBrain()->ideas[0] << '\n';

	delete dog1;
	delete dog2;


	Cat* cat1 = new Cat();
	cat1->getBrain()->ideas[0] = "I want fish";
	Cat* cat2 = new Cat(*cat1);
	cat1->getBrain()->ideas[0] = "I want milk";

	std::cout << "cat1 idea[0]: " << cat1->getBrain()->ideas[0] << '\n';
	std::cout << "cat2 idea[0]: " << cat2->getBrain()->ideas[0] << '\n';

	delete cat1;
	delete cat2;

	return 0;
}