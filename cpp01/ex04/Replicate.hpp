/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replicate.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:43:43 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/12 13:44:24 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLICATE_HPP
# define REPLICATE_HPP

#include <iostream>
#include <string>
#include <fstream>

std::string    replaceString(const std::string& line, const std::string& search, 
    const std::string& replace);
bool copyAndReplace(std::string& input, std::string& output, std::string& s1, 
    std::string& s2);

#endif
