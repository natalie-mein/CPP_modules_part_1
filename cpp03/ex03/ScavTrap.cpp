/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:31:05 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/27 12:13:40 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_gateGuard = false;
	
	std::cout << CYAN << "ScavTrap: Default constructor called." << DEFAULT << std::endl;
}

ScavTrap::ScavTrap(std::string name) :ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	
	std::cout << CYAN << "ScavTrap: Constructor called: say hi to " << _name 
		  << DEFAULT << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << CYAN << "ScavTrap: Destructor called! Say goodbye to " << _name 
		  << DEFAULT << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	_gateGuard = copy._gateGuard;
	
	std::cout << CYAN << "ScavTrap: Copy constructor called." << DEFAULT << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_gateGuard = other._gateGuard;
	}
	
	std::cout << CYAN << "ScavTrap: Assignment constructor called" << DEFAULT << std::endl;
	
	return *this;
}

void ScavTrap::guardGate() 
{
	if (_gateGuard == false) {
		std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode!" << std::endl;
		_gateGuard = true;
	}  
	else
		std::cout << _name << "'s Gatekeeper mode is already active!" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
	if (_energyPoints >= 1 && _hitPoints >= 1)
	{
		std::cout << RED << "Scavtrap " << this->_name << " lunges at " << target 
			  << " causing " << _attackDamage << " points of damage!"
			  << DEFAULT << std::endl;
		_energyPoints -= 1;
	}
	else if (_energyPoints == 0)
	{
		std::cout << CYAN << "ScavTrap " << this->_name << " has no ENERGY points and cannot attack!"
			  << DEFAULT << std::endl;
		guardGate();
	}
	else if (_hitPoints == 0)
	{
		std::cout << CYAN << "ScavTrap " << this->_name << " has no HIT points and cannot attack!" 
			  << DEFAULT << std::endl;
		guardGate();
	}
}

