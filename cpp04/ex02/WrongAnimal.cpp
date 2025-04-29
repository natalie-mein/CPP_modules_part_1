/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 14:19:02 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 14:51:16 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Default")
{
	std::cout << "[ WRONG ANIMAL ] Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) 
{
	std::cout << "[ WRONG ANIMAL ] Parameterized constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[ WRONG ANIMAL ] Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	this->_type = copy._type;
	
	std::cout << "[ WRONG ANIMAL ] Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other) {
		this->_type = other._type;
	}
	std::cout << "[ WRONG ANIMAL ] Assignment constructor called" << std::endl;
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}


void WrongAnimal::makeSound() const
{
	std::cout << "[ WRONG ANIMAL ] 'I'm not wrong just different levels of right'\n" 
			  << "\tlove: " << this->_type << std::endl;
}

