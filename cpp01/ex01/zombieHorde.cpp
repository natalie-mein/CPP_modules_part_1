/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:05:43 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/11 12:05:46 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *horde;
    int     z;

    if (N < 1) {
        std::cout << "A horde needs at least 1 zombie" << std::endl;
        return nullptr;
    }

    try {
        horde = new Zombie[N];
    } catch (std::bad_alloc&) {
        std::cout << "Memory allocation failed." << std::endl;
        return nullptr;
    }
        
    for (z = 0; z < N; z++)
        horde[z].setName(name);

    return horde;
}