/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:36:34 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/12 16:36:36 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    harl;
    std::string     level;

    if (argc != 2)
    {
        std::cout << "Usage: ./Harl [level]" << std::endl;
        std::cout << "Levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return 1;
    }

    level =  argv[1];
    harl.complain(level);

    return 0;
}
