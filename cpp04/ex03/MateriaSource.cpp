/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:54:39 by nmeintje          #+#    #+#             */
/*   Updated: 2025/04/15 13:54:41 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) 
{
	for (int i = 0; i < 4; i++)
		this->_learned[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++) {
        if (other._learned[i])
            this->_learned[i] = other._learned[i]->clone();
        else
            this->_learned[i] = nullptr;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (this->_learned[i])
                delete _learned[i];
            this->_learned[i] = other._learned[i] ? other._learned[i]->clone() : nullptr;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++) {
        if (this->_learned[i]) {
             delete this->_learned[i];
             this->_learned[i] = nullptr;
        }
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m) return;

    for (int i = 0; i < 4; i++) {
        if (!this->_learned[i]) {
            this->_learned[i] = m;
            std::cout << "[ MATERIA SOURCE ] Learned " << m->getType() << std::endl;
            return;
        }
    }
    std::cout << "[ MATERIA SOURCE ] Inventory full, can't learn more Materia" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++) {
        if (this->_learned[i] && this->_learned[i]->getType() == type) {
            std::cout << "[ MATERIA SOURCE ] Creating materia of type " << type << std::endl;
            return this->_learned[i]->clone();
        }
    }
    std::cout << "[ MATERIA SOURCE ] Unknown materia type: " << type << std::endl;
    return nullptr;
}
