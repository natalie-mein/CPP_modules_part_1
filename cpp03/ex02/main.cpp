/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:38:15 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/27 11:33:59 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void testFragTrap(void)
{
	std::cout << "\n===== Creating FragTraps =====\n" << std::endl;
	FragTrap defaultFrag;
	FragTrap namedFrag("Fraggy");
	FragTrap copiedFrag(namedFrag);
	FragTrap otherFrag("Other");
	copiedFrag = otherFrag;
	
	std::cout << "\n===== High Five Test =====\n" << std::endl;
	defaultFrag.highFivesGuys();
	namedFrag.highFivesGuys();
	otherFrag.highFivesGuys();
	copiedFrag.highFivesGuys();	

	std::cout << "\n===== Inheritance test Test =====\n" << std::endl;
	FragTrap tiredFrag("TiredBot");
	std::cout << std::endl;
	for (int i = 0; i < 11; i++) {
		tiredFrag.attack("Dummy Target");
		tiredFrag.beRepaired(2);
	}

	std::cout << "\n===== Destroying FragTraps =====\n" << std::endl;
}

int main()
{
	std::cout << "\n\nLoading FragTraps...\n" << std::endl;
	testFragTrap();

	return 0;
}
