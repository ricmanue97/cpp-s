
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// ...existing code...
	ClapTrap clap("CL4P-TP");
	ScavTrap scav("SC4V-TP");
	FragTrap frag("FR4G-TP");

	std::cout << "=== initial actions ===\n";
	clap.attack("a target");
	scav.attack("a target");
	frag.attack("a target");

	std::cout << "\n=== damage and repair ===\n";
	clap.takeDamage(5);
	clap.beRepaired(3);

	scav.takeDamage(20);
	scav.beRepaired(10);

	frag.takeDamage(30);
	frag.beRepaired(15);

	std::cout << "\n=== scav special ===\n";
	scav.guardGate();

	std::cout << "\n=== frag special ===\n";
	frag.highFivesGuys();

	std::cout << "\n=== exhaustion test ===\n";

	for (int i = 0; i < 51; ++i) {
		scav.attack("dummy");
	}

	std::cout << "\n=== frag exhaustion test ===\n";
	for (int i = 0; i < 101; ++i) {
		frag.attack("dummy");
	}

	std::cout << "\n=== finished ===\n";
	return 0;
}