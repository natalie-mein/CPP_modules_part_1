/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 14:17:30 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 14:23:41 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

#define YELLOW "\033[33m"
#define RED "\033[31m"
#define DEFAULT "\033[0;0m"
#define BLUE "\033[34m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define REDBACK "\e[41m"
#define BLUEBACK "\e[44m"

class WrongAnimal {

	protected:
		std::string     _type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal(void);
		
		std::string 	getType(void) const;
		void 			makeSound(void) const;
};

#endif

