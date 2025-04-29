/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:41:43 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/12 13:41:44 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replicate.hpp"

int main(int argc, char **argv)
{
    std::string inFile;
    std::string outFile;
    std::string s1;
    std::string s2;

    if (argc != 4)
    {
        std::cerr << "Incorrect number of arguments.\n"
                  << "Correct usage: \n"
                  << "./Replicate [filename] [search] [replace]" << std::endl;
        return 1;
    }

     inFile = argv[1];
     outFile = inFile + ".replace";
     s1 = argv[2];
     s2 = argv[3];

     if (copyAndReplace(inFile, outFile, s1, s2)){
        std::cout << "Success!" << std::endl;
     } else
        return 1;

    return 0;
}