/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:30:41 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/27 11:53:32 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default_clap_name")
{
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	
	std::cout << MAGENTA << "ClapTrap: Default constructor called."
		  << DEFAULT << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;

	std::cout << MAGENTA << "ClapTrap: Constructor called: say hi to " << _name 
		  << DEFAULT << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;

	std::cout << MAGENTA << "ClapTrap: Copy constructor called." << DEFAULT << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) 
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << MAGENTA << "ClapTrap: Assignment constructor called" << DEFAULT << std::endl;

	return *this;
}

//test constructor
ClapTrap::ClapTrap(std::string name, int HP, int EP, int AD)
{
	_name = name;
	_hitPoints = HP;
	_energyPoints = EP;
	_attackDamage = AD;

	std::cout << YELLOW << "ClapTrap: Test constructor called! " << DEFAULT << std::endl;
}

ClapTrap::~ClapTrap() 
{
	std::cout << MAGENTA << "ClapTrap: Destructor called! Say goodbye to " << _name 
		  << DEFAULT << std::endl;
}

void ClapTrap::attack(const std::string& target) 
{
	if (_energyPoints >= 1 && _hitPoints >= 1)
	{
		std::cout << RED << "Claptrap " << _name << " attacks " << target 
			  << " causing " << _attackDamage << " points of damage!"
			  << DEFAULT << std::endl;
		_energyPoints -= 1;
	}
	else if (_energyPoints == 0)
	{
		std::cout << BLUE << "ClapTrap " << _name << " has no ENERGY points and cannot attack!" 
			  << DEFAULT << std::endl;
	}
	else if (_hitPoints == 0)
	{
		std::cout << BLUE << "ClapTrap " << _name << " has no HIT points and cannot attack!"
			  << DEFAULT << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if (_hitPoints >= (int)amount)
	{
		_hitPoints -= amount;
		std::cout << MAGENTA << "ClapTrap " << _name << " has lost " << amount << " Hit Points!"
			  << DEFAULT << std::endl;
	}
	else if ((int)amount > _hitPoints)
	{
		_hitPoints = 0;
		std::cout << MAGENTA << "ClapTrap " << _name << " has no more Hit Points! :-["
			  << DEFAULT << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	if (_energyPoints >= 1 && _hitPoints >= 1)
	{
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout << MAGENTA << "ClapTrap " << _name << " has recovered " << amount
			  << " Hit Points!" << DEFAULT << std::endl;
	}
	else if (_hitPoints == 0)
	{
		std::cout << MAGENTA << "ClapTrap " << _name
			  << " has no Hit Points and can not repair itself! :=["
			  << DEFAULT << std::endl;
	}
	else if (_energyPoints == 0)
	{
		std::cout << MAGENTA << "ClapTrap " << _name
			  << " does not have enough energy points to repair itself! :-["
			  << DEFAULT << std::endl;
	}
}
