/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:03:23 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/31 16:03:25 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(std::string const &type) : AMateria(type)
{
    this->_type = "cure";
}

Cure::Cure(const Cure& copy)
{
    this->_type = copy._type;
}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

Cure::~Cure(void) {}

Cure* Cure::clone(void) const 
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target) 
{
    std::cout << "[ CURE ] * heals " << target.getName() << "'s wounds *" << std::endl;
}
