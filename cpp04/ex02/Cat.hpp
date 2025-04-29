/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:55:08 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 16:12:50 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain*	_catBrain;

	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat& copy);
		Cat &operator=(const Cat &other);
		~Cat(void) override;

		void  	makeSound(void) const override;
		Brain*	getBrain(void) const;
};

#endif
