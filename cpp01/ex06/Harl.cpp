/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:36:56 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/14 18:32:23 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void    Harl::_debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-"
              << "special-ketchup burger.\n" 
              << "I really do!\n" << std::endl;
}

void    Harl::_info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\n"
              << " You didn’t put enough bacon in my burger!\n"
              << " If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::_warning(void) 
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\n"  
              << "I’ve been coming for years whereas you started working here"
              <<"since last month.\n" << std::endl;
}

void    Harl::_error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int index;
	
	void (Harl::*complaints[])(void) = {
	    &Harl::_debug, 
	    &Harl::_info, 
	    &Harl::_warning, 
	    &Harl::_error};

	for (index = 0; index < 4; ++index) {
                if (level == levels[index]) {
			break;
		}
	}

    switch (index)
    {
        case 0:
            (this->*complaints[0])();
        case 1:
	    (this->*complaints[1])();
        case 2:
            (this->*complaints[2])();
        case 3:
            (this->*complaints[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

