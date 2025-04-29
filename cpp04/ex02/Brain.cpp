/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:13:54 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 15:26:02 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Default idea";
	std::cout << "[ BRAIN ] Default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	std::cout << "[ BRAIN ] Copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	std::cout << "[ BRAIN ] Assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "[ BRAIN ] Destructor called." << std::endl;
}

void	Brain::setIdea(int i, const std::string& idea)
{
	if (i >= 0 && i < 100)
		_ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100) {
		return _ideas[i];
	}	else {
		return "No Idea!";
	}
}
