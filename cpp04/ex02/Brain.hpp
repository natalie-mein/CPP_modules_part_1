/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:03:09 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 15:21:40 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain {
	
	private:
		std::string	_ideas[100];
			
	public:
		Brain(void);
		Brain(const Brain& copy);
		Brain &operator=(const Brain &other);
		~Brain(void);

		void		setIdea(int i, const std::string& idea);
		std::string	getIdea(int i) const;
};

#endif
