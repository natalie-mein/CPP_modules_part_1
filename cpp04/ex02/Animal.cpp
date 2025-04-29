/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:54:46 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 14:50:52 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("default")
{
	std::cout << "[ ANIMAL ] Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) 
{
	std::cout << "[ ANIMAL ] Parameterized constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "[ ANIMAL ] Destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	this->_type = copy._type;

	std::cout << "[ ANIMAL ] Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other) {
		this->_type = other._type;
	}
	std::cout << "[ ANIMAL ] Assignment constructor called" << std::endl;
	return *this;
}

const std::string& Animal::getType(void) const
{
	return this->_type;
}

// should this be commented out?
void Animal::makeSound(void) const
{
	std::cout << "[ ANIMAL ] 'Keep the change, ya filthy animal!'" << std::endl;
}
