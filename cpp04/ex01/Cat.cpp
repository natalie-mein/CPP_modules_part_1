/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:55:17 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 16:11:21 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	this->_catBrain = new Brain();
	std::cout << "[ CAT ] Default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	this->_type = "Cat";
	this->_catBrain = new Brain();
	std::cout << "[ CAT ] Parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	this->_catBrain = new Brain(*copy._catBrain);
	std::cout << "[ CAT ] Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other) {
		Animal::operator=(other);
		delete _catBrain;
		_catBrain = new Brain(*other._catBrain);
	}
	std::cout << "[ CAT ] Assignment constructor called" << std::endl;
	return *this;
}

Cat::~Cat(void)
{
	delete this->_catBrain;
	std::cout << "[ CAT ] Destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "[ CAT ] 'A man can be himself only so long as he is alone; \n" 
		  << "and if he does not love solitude, he will not love freedom;\n "
		  << "for it is only when he is alone that he is really free.'\n" << std::endl;
}

Brain* Cat::getBrain(void) const 
{
	return this->_catBrain;
}
