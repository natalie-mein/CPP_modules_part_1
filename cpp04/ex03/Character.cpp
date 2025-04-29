/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:01:13 by nmeintje          #+#    #+#             */
/*   Updated: 2025/04/14 14:01:15 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("default")
{
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = nullptr;
	}
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = nullptr;
	}
}
Character::Character(const Character& copy)
{
	this->_name = copy.getName() + "_copy";
	for (int i = 0; i < 4; i++) {
		if (copy._inventory[i] == nullptr)
			this->_inventory[i] = nullptr;
		else
			this->_inventory[i] = copy._inventory[i]->clone();
	}
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : nullptr;
		}
	}
	return *this;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
			this->_inventory[i] = nullptr;
		}
	}
}

std::string const   &Character::getName(void) const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (m == nullptr) {
        std::cout << "[ CHARACTER ] " << this->_name << " tried to equip NULL materia" 
				  << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i] == nullptr) {
            this->_inventory[i] = m;
            std::cout << "[ CHARACTER ] " << this->_name << " equipped " << m->getType() 
                      << " in slot " << i << std::endl;
            return;
        }
    }
	std::cout << "[ CHARACTER ] " << this->_name << "'s inventory is full, cannot equip " 
              << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4) 
		std::cout << "[ CHARACTER ] " << this->_name << " tried to unequip nothing from slot " 
				  << idx << std::endl;
	else if (!this->_inventory[idx])
		std::cout << "[ CHARACTER ] " << this->_name << " has nothing equipped at slot "
				  << idx << std::endl;
	else {
		AMateria *ptr = this->_inventory[idx];
		std::cout << "[ CHARACTER ] " << this->_name << " unequipped " << ptr->getType() 
				  << " from slot " << idx << std::endl;
		this->_inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4) {
		std::cout << "[ CHARACTER ] Index is not in range" << std::endl;
	}
	else if (this->_inventory[idx] == NULL) {
		std::cout << "[ CHARACTER ] Nothing to use at index " << idx << std::endl;
	}
	else {
		std::cout << "[ CHARACTER ] " << this->_name << " ";
		this->_inventory[idx]->use(target);
	}
}

