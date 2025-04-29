/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 14:30:37 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 14:33:00 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
        this->_type = "WrongCat";
        std::cout << "[ WRONG CAT ] Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
        this->_type = "WrongCat";
        std::cout << "[ WRONG CAT] Parameterized constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
        std::cout << "[ WRONG CAT ] Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
        if (this != &other) {
                WrongAnimal::operator=(other);
        }
        std::cout << "[ WRONG CAT ] Assignment constructor called" << std::endl;
        return *this;
}

WrongCat::~WrongCat(void)
{
        std::cout << "[ WRONG CAT ] Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
        std::cout << "[ WRONG CAT ] You're never gonna see this. Meow meow " << std::endl;
}
