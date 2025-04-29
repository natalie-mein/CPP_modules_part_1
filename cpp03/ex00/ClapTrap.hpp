/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:10:48 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/19 16:10:50 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

#define YELLOW "\033[33m"
#define RED "\033[31m"
#define DEFAULT "\033[0;0m"
#define BLUE "\033[1;34m"
#define GREEN "\033[1;32m"
#define CYAN "\033[1;36m"
#define MAGENTA "\033[1;35m"
#define REDBACK "\e[41m"
#define BLUEBACK "\e[44m"

class ClapTrap {
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name); // should this be _name?
		ClapTrap(const ClapTrap& copy);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();

		//test constructor
		ClapTrap(std::string name, int HP, int EP, int AD);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
