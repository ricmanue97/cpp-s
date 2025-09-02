
#include "ClapTrap.hpp"

int main()
{
	ClapTrap alpha("Alpha");
	ClapTrap bravo("Bravo");

	std::cout << "\n-- Initial states --\n";
	std::cout << alpha.getName() << " HP: " << alpha.getHitPoints() << " EN: " << alpha.getEnergyPoints() << "\n";
	std::cout << bravo.getName() << " HP: " << bravo.getHitPoints() << " EN: " << bravo.getEnergyPoints() << "\n\n";

	std::cout << "-- Alpha attacks Bravo once --\n";
	alpha.attack(bravo.getName());
	bravo.takeDamage(alpha.getAttackDamage());
	std::cout << bravo.getName() << " HP now: " << bravo.getHitPoints() << "\n\n";

	std::cout << "-- Bravo takes 5 damage and then repairs 3 --\n";
	bravo.takeDamage(5);
	bravo.beRepaired(3);
	std::cout << bravo.getName() << " HP: " << bravo.getHitPoints() << " EN: " << bravo.getEnergyPoints() << "\n\n";

	std::cout << "-- Alpha performs a barrage to exhaust energy --\n";
	for (int i = 0; i < 12; ++i)
	{
		std::cout << "Round " << i + 1 << ": ";
		alpha.attack("Target");
	}
	std::cout << alpha.getName() << " energy after barrage: " << alpha.getEnergyPoints() << "\n\n";

	std::cout << "-- Inflict fatal damage to Bravo and try actions --\n";
	bravo.takeDamage(1000); // force HP to zero
	bravo.attack(alpha.getName());
	bravo.beRepaired(10);

	std::cout << "\n-- Test copy constructor and assignment --\n";
	ClapTrap copyAlpha(alpha); // copy ctor
	std::cout << "Copy name: " << copyAlpha.getName() << " HP: " << copyAlpha.getHitPoints() << " EN: " << copyAlpha.getEnergyPoints() << "\n";

	ClapTrap assigned("Placeholder");
	assigned = bravo; // assignment
	std::cout << "Assigned name: " << assigned.getName() << " HP: " << assigned.getHitPoints() << " EN: " << assigned.getEnergyPoints() << "\n";

	return 0;
}