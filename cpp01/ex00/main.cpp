/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:44:04 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/10 16:45:03 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
    Zombie *zombie;

    zombie = newZombie("Rick");
    if (zombie != nullptr) {
        zombie->announce();
    } else {
        std::cout << "Failed to allocate new zombie" << std::endl;
        return 1;
    }
    
    randomChump("Daryl");
    
    delete zombie;
    return 0;
}
