/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:54:58 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 13:39:59 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

#define DEFAULT "\033[0;0m"
#define CYAN "\033[36m"

class Animal {

	protected:
		std::string	_type;
	
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal& copy);
		Animal &operator=(const Animal &other);
		virtual ~Animal(void);

		const std::string&  getType(void) const;
		virtual void makeSound(void) const;
};

#endif
