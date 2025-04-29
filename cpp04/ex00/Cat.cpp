/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:55:17 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 13:50:12 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "[ CAT ] Default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	this->_type = "Cat";
	std::cout << "[ CAT ] Parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "[ CAT ] Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other) {
		Animal::operator=(other);
	}
	std::cout << "[ CAT ] Assignment constructor called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "[ CAT ] Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "[ CAT ] 'A man can be himself only so long as he is alone; \n" 
		  << "and if he does not love solitude, he will not love freedom;\n "
		  << "for it is only when he is alone that he is really free.'\n" << std::endl;
}
