/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:04:32 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/11 12:04:33 by nmeintje         ###   ########.fr       */
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
		Zombie ();
		~Zombie();

		void	announce(void);
		void	setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif