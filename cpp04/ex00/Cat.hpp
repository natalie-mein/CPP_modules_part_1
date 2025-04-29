/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:55:08 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 14:28:12 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat& copy);
		Cat &operator=(const Cat &other);
		~Cat(void) override;

		void makeSound(void) const override;
		
};

#endif
