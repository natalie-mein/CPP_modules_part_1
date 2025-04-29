/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:17:51 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/11 14:17:52 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Address of brain:\t\t" << &brain << std::endl;
    std::cout << "Address held by stringPTR:\t" << stringPTR << std::endl; 
    std::cout << "Address held by &stringREF:\t" << &stringREF << std::endl;
    std::cout << std::endl;

    std::cout << "Value of brain:\t\t\t" << brain << std::endl;
    std::cout << "Value pointed to by stringPTR:\t" << *stringPTR << std::endl;
    std::cout << "Value of stringREF:\t\t" << stringREF <<std::endl;

    return 0;
}
