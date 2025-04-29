/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:55:35 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 13:51:10 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	std::cout << "[ DOG ] Default constructor" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	this->_type = "Dog";
	std::cout << "[ DOG ] Parameterized constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "[ DOG ] Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other) {
		Animal::operator=(other);
	}
	std::cout << "[ DOG ] Assignment constructor called" << std::endl;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "[ DOG ] Destructor called" << DEFAULT << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "[ DOG ] Bow wow wow, yippie yo, yippie yay.\n"
		  << "Where my dogs at? Bark with me now\n" << std::endl;
}
