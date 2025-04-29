/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replicate.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:43:29 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/12 13:43:33 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replicate.hpp"

std::string    replaceString(const std::string& line, const std::string& search, 
    const std::string& replace)
{
    std::string result;
    size_t  pos = 0;
    size_t  prevPos = 0;

    if (search.empty())
        return line;

    while ((pos = line.find(search, prevPos)) != std::string::npos)
    {
        result += line.substr(prevPos, pos - prevPos);
        result += replace;
        prevPos = pos + search.length();
    }

    result += line.substr(prevPos);
    return result;
}

bool copyAndReplace(std::string& input, std::string& output, std::string& s1, 
    std::string& s2)
{
    std::ifstream inFile(input);
    if (!inFile) {
        std::cerr << "Error: Could not open file " << input << std::endl;
        return false;
    }

    std::ofstream outFile(output);
    if (!outFile) {
        std::cerr << "Error: Could not create file " << output << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        outFile << replaceString(line, s1, s2) << "\n";
    }

    inFile.close();
    outFile.close();
    return true;
}
