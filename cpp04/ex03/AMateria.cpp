/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:45:22 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/31 15:45:24 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("default") {}
   
AMateria:: AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria& copy)
{
    this->_type = copy._type;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

AMateria::~AMateria(void) {}

std::string const &AMateria::getType(void) const 
{
    return this->_type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
}