/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:38:54 by nmeintje          #+#    #+#             */
/*   Updated: 2025/02/24 14:41:44 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

void    Megaphone(int argc, char *argv[])
{

	for (int i = 1; i < argc; i += 1)
	{
		for (int j = 0; j < (int)strlen(argv[i]); j += 1)
		{
			std::cout << (char)toupper(argv[i][j]);
		}

	}
	std::cout << std::endl;
}

int     main(int argc, char *argv[])
{
	if (argc > 1)
		Megaphone(argc, argv);
	else
                std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
}

