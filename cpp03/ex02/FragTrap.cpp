/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:39:17 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/27 11:23:52 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	
	std::cout << GREEN << "FragTrap: Default constructor called."
		  << DEFAULT << std::endl;
}

FragTrap::FragTrap(std::string name) :ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	
	std::cout << GREEN << "FragTrap: Constructor called: say hi to " << _name 
		  << DEFAULT << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << GREEN << "FragTrap: Destructor called! Say goodbye to " << _name 
		  << DEFAULT << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << GREEN << "FragTrap: Copy constructor called." << DEFAULT << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	
	std::cout << GREEN << "FragTrap: Assignment constructor called"
		  << DEFAULT << std::endl;
	
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << CYAN << "'Whatsup guys!' says FragTrap " << _name << " 'High five?'" 
		  << DEFAULT << std::endl;
}
