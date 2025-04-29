/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:10:36 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/19 16:10:37 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void    testScavTrap()
{
    std::cout << "===== Creating ScavTraps =====\n" << std::endl;
    ScavTrap scav1("Scavvy");
    ScavTrap scav2("Guardian");
    ScavTrap scav3; // Default constructor
    ScavTrap scav4(scav1); // Copy constructor
   
    std::cout << "\n===== Testing Attack Function =====\n" << std::endl;
    scav1.attack("TargetDummy");
    scav2.attack("AnotherDummy");
   
    std::cout << "\n===== Draining Energy Points =====\n" << std::endl;
    for (int i = 0; i < 51; i++) { // Exceed available energy
        scav1.attack("EndlessDummy");
    }

    std::cout << "\n===== Testing Guard Gate Mode =====\n" << std::endl;
    scav1.guardGate();
    scav1.guardGate(); // Should say already in Gatekeeper mode

    std::cout << "\n===== Testing Take Damage =====\n" << std::endl;
    scav2.takeDamage(30);
    scav2.takeDamage(80); // Exceeding HP, should set HP to 0

    std::cout << "\n===== Testing Attack When Out of HP =====\n" << std::endl;
    scav2.attack("WeakTarget");

    std::cout << "\n===== Testing Repair Function =====\n" << std::endl;
    scav3.takeDamage(50);
    scav3.beRepaired(20);
    scav3.beRepaired(90);
   
    std::cout << "\n===== Assigning One ScavTrap to Another =====\n" << std::endl;
    scav4 = scav3; // Assignment operator test
    scav4.attack("CloneDummy");

    std::cout << "\n===== Destroying ScavTraps =====\n" << std::endl;
}

int main()
{
    std::cout << "\n\nLoading Scavtraps...\n" << std::endl;
    testScavTrap();

    return 0;
}
