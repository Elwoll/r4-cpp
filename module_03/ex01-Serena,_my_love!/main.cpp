//
// Created by Lowell Zima on 12/18/22.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main() {
	ClapTrap bob("๐งก Bob");
	ClapTrap bobette("๐ Bobette");
	ScavTrap robot("๐ค ScavTrap Robot");

	std::cout << "______________________________________________________________________________________" << std::endl;
	robot.attack("๐งก Bob");
	std::cout << "______________________________________________________________________________________" << std::endl;
	robot.takeDamage(20);
	std::cout << "______________________________________________________________________________________" << std::endl;
	robot.beRepaired(20);
	std::cout << "______________________________________________________________________________________" << std::endl;
	robot.guardGate();
}
