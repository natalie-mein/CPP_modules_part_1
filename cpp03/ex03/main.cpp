/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:34:35 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/27 12:05:19 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	testDiamondTrap(void)
{
	std::cout << "===== Creating Diamond Traps =====\n\n" << std::endl;
	DiamondTrap Amethyst;
	DiamondTrap Sapphire("Sapphire");
	DiamondTrap Emerald("Emerald");
	DiamondTrap Diamond("Amethyst");
	DiamondTrap Garnet(Emerald);
	DiamondTrap Glass;

	Amethyst = Diamond;

	std::cout << "\n\n===== Starting stats =====\n\n" << std::endl;
	Amethyst.printInfo();
	Sapphire.printInfo();
	Emerald.printInfo();
	Diamond.printInfo();
	Garnet.printInfo();
	Glass.printInfo();

	std::cout << "\n\n===== Testing Attack Function =====\n\n" << std::endl;
	Amethyst.attack("Sapphire");
	Sapphire.attack("Amethyst");
	Garnet.attack("Ruby");
	
	std::cout << "\n\n===== Draining Energy Points =====\n\n" << std::endl;
	for (int i = 0; i < 101; i++) { // Exceed available energy
		Emerald.attack("EndlessDiamond");
	}

	std::cout << "\n\n===== Testing Take Damage =====\n" << std::endl;
	Amethyst.takeDamage(30);
	Amethyst.takeDamage(80); // Exceeding HP, should set HP to 0
	Sapphire.takeDamage(50);

	std::cout << "\n===== Testing Attack When Out of HP =====\n" << std::endl;
	Amethyst.attack("WeakTarget");

	std::cout << "\n===== High Five Test =====\n" << std::endl;
	Amethyst.highFivesGuys();
	Sapphire.highFivesGuys();
	Emerald.highFivesGuys();
	Garnet.highFivesGuys();
	Glass.highFivesGuys();

	
	std::cout << "\n\n===== Testing whoAmI =====\n\n" << std::endl;
	Amethyst.whoAmI();
	Sapphire.whoAmI();
	Emerald.whoAmI();
	Diamond.whoAmI();
	Garnet.whoAmI();
	Glass.whoAmI();

	std::cout << "\n\n===== Final stats =====\n\n" << std::endl;
	Amethyst.printInfo();
	Sapphire.printInfo();
	Emerald.printInfo();
	Diamond.printInfo();
	Garnet.printInfo();
	Glass.printInfo();

	std::cout << "\n===== Destroying Diamond Traps =====\n" << std::endl;
}

int main(void)
{
    std::cout << "\n\nLoading DiamondTraps...\n" << std::endl;
	testDiamondTrap();

	return 0;
}
