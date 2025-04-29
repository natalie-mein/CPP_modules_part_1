/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:57:51 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/11 14:57:55 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon)
{
    this->setType(weapon);
}

Weapon::~Weapon()
{
    std::cout << this->getType() << " jammed and then exploded." <<std::endl;
}

void Weapon::setType(const std::string &weapon)
{
    _type = weapon;
}
const std::string& Weapon::getType(void) const
{
    return _type;
}
