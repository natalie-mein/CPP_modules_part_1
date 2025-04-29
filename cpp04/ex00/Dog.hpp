/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:55:28 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 13:28:18 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog& copy);
		Dog &operator=(const Dog &other);
		~Dog(void) override;

		void    makeSound(void) const override;
};

#endif
