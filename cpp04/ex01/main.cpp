#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();

	std::cout << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << std::endl;

	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;

	std::cout << std::endl;

	wrongMeta->makeSound();
	wrongCat->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongCat;

	{
		const Cat* catA = new Cat();
		Cat* catB = new Cat(*catA);

		const Brain* catA_brain = catA->getBrain();
		const Brain* catB_brain = catB->getBrain();

		std::cout << "catA brain pointer: " << catA_brain << std::endl;
		std::cout << "catB brain pointer: " << catB_brain << std::endl;
		std::cout << "Cats' brains are " << (catA_brain == catB_brain ? "the same (shallow copy)" : "different (deep copy)") << std::endl << std::endl;

		if (catA_brain && catB_brain)
		{
			std::cout << "catA idea[0]: " << catA->getBrain()->getIdea(0) << std::endl;
			std::cout << "catB idea[0]: " << catB->getBrain()->getIdea(0) << std::endl;
			std::cout << "catA idea[99]: " << catA->getBrain()->getIdea(99) << std::endl;
			std::cout << "catB idea[99]: " << catB->getBrain()->getIdea(99) << std::endl;
		}

		delete catA;
		delete catB;
		std::cout << std::endl;
	}

	{
		const Dog* dogA = new Dog();
		Dog* dogB = new Dog(*dogA);

		const Brain* dogA_brain = dogA->getBrain();
		const Brain* dogB_brain = dogB->getBrain();

		std::cout << "dogA brain pointer: " << dogA_brain << std::endl;
		std::cout << "dogB brain pointer: " << dogB_brain << std::endl;
		std::cout << "Dogs' brains are " << (dogA_brain == dogB_brain ? "the same (shallow copy)" : "different (deep copy)") << std::endl << std::endl;

		if (dogA_brain && dogB_brain) {
			std::cout << "dogA idea[0]: " << dogA->getBrain()->getIdea(0) << std::endl;
			std::cout << "dogB idea[0]: " << dogB->getBrain()->getIdea(0) << std::endl;
			std::cout << "dogA idea[99]: " << dogA->getBrain()->getIdea(99) << std::endl;
			std::cout << "dogB idea[99]: " << dogB->getBrain()->getIdea(99) << std::endl;
		}

		delete dogA;
		delete dogB;
		std::cout << std::endl;
	}
	return 0;
}

