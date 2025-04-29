/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:39:16 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/27 10:55:18 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class	ScavTrap : public ClapTrap {
	
	private:
		bool    _gateGuard;
	
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& copy);
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();
		
		void guardGate();
		void attack(const std::string& target);
};

#endif
