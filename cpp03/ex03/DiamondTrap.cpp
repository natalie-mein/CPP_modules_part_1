/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:32:03 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/27 11:48:29 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("default")
{
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	
	std::cout << GREEN << "DiamondTrap: Default constructor called."
		  << DEFAULT << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) 
: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	
	std::cout << GREEN << "DiamondTrap: Constructor called: say hi to " << _name
		  << DEFAULT << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) 
: ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
    std::cout << GREEN << "DiamondTrap: Copy constructor called." << DEFAULT << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		ClapTrap::operator=(other);
	}
	
	std::cout << GREEN << "DiamondTrap: Assignment constructor called"
		  << DEFAULT << std::endl;
	
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << GREEN << "DiamondTrap: Destructor called! Say goodbye to " << _name
		  << DEFAULT << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << GREEN << _name << DEFAULT << "\n"
		  << "My ClapTrap name is " << MAGENTA << ClapTrap::_name << DEFAULT <<"\n"
		  << std::endl;
}

void	DiamondTrap::printInfo() 
{
	std::cout << "DiamondTrap: \t" << _name << YELLOW <<" HP : " << _hitPoints << "\n"
		  << "\t\t\t EP : " << _energyPoints << "\n" << "\t\t\t AD : "
		  << _attackDamage << DEFAULT << "\n" << std::endl;
}

