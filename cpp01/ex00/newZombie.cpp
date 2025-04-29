/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:56:20 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/10 16:57:47 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *newbie;
	
	try {
		newbie = new Zombie(name);
	} catch (std::bad_alloc&) {
		std::cout << "Memory allocation failed" << std::endl;
		return nullptr;
	}
	
	return newbie;
}
