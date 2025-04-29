/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:45:12 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/10 17:09:36 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class	Zombie {

	private:
		std::string _name;
	
	public:
		Zombie(std::string name);
		~Zombie();

		void announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
