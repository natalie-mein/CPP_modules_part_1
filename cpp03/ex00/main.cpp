/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:10:36 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/27 10:42:42 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void defaultTests()
{
	std::cout << "\n===== Default ClapTrap constructors =====\n" << std::endl;
	
	ClapTrap    happy("Happy");
	ClapTrap    clappy("Clappy");
	ClapTrap    trappy(happy);
	ClapTrap    Alan;
	
	happy = clappy;
	
	std::cout << "\n===== ClapTrap Battle =====\n" << std::endl;
	trappy.attack("Clappy");
	clappy.takeDamage(5);
	trappy.beRepaired(21);
	
	std::cout << "\n===== Destroying ClapTraps =====\n" << std::endl;
}

void customTests()
{
	std::cout << "\n===== Custom ClapTrap Contructors =====\n" << std::endl;
	
	// McClane: Tough guy, high HP & attack, decent energy
	ClapTrap McClane("JohnMcClane", 50, 10, 10);

	// Gruber: Smart but weaker, less HP but more energy for strategy
	ClapTrap Gruber("HansGruber", 30, 7, 7);
	
	std::cout << "\n===== Custom ClapTrap Battle =====\n" << std::endl;
	
	// John McClane attacks Hans Gruber
	McClane.attack("HansGruber");
	Gruber.takeDamage(10);

	// Hans Gruber counterattacks
	Gruber.attack("JohnMcClane");
	McClane.takeDamage(7);

	// McClane heals himself
	McClane.beRepaired(5);
	
	// Gruber uses up his energy points with multiple attacks
	for (int i = 0; i < 6; ++i)
	{
		Gruber.attack("JohnMcClane");
		McClane.takeDamage(7);
	}
	
	// Gruber tries to attack but is out of energy
	Gruber.attack("JohnMcClane");
	
	// McClane lands the final attack. Hans can't repaire himself because he's out of points!
	McClane.attack("HansGruber");
	Gruber.beRepaired(10);
	
	std::cout << "\n===== Destroying ClapTraps =====\n" << std::endl;
}

int main()
{
	std::cout << "\n\nLoading ClapTraps...\n" << std::endl;
	
	defaultTests();
	customTests();
	
	return 0;
}
