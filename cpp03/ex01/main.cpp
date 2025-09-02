
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("CL4P-TP");
	ScavTrap scav("SC4V-TP");

	std::cout << "=== initial actions ===\n";
	clap.attack("a target");
	scav.attack("a target");

	std::cout << "\n=== damage and repair ===\n";
	clap.takeDamage(5);
	clap.beRepaired(3);

	scav.takeDamage(20);
	scav.beRepaired(10);

	std::cout << "\n=== scav special ===\n";
	scav.guardGate();

	std::cout << "\n=== exhaustion test ===\n";

	for (int i = 0; i < 51; ++i) {
		scav.attack("dummy");
	}

	std::cout << "\n=== finished ===\n";
	return 0;
}