/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:01:23 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/11 12:01:30 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int zombieNum = 10;

	horde = zombieHorde(zombieNum, "Carl");

	if (horde != nullptr) {
		for (int i = 0; i < zombieNum; i++)
			horde[i].announce();
	} else {
		std::cout << "Failed to allocate zombie horde" << std::endl;
		return 1;
	}
	
	delete[] horde;
	return 0;
}
