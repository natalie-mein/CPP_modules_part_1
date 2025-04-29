/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:03:05 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/31 16:03:07 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(std::string const &type) : AMateria(type)
{
    this->_type = "ice";
}

Ice::Ice(const Ice& copy)
{
    this->_type = copy._type;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

Ice::~Ice(void) {}

Ice* Ice::clone(void) const 
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target) 
{
    std::cout << "[ ICE ] * shoots an icebolt at " << target.getName() << " *" << std::endl;
}
