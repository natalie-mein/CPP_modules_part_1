/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:05:42 by nmeintje          #+#    #+#             */
/*   Updated: 2025/04/10 14:07:19 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

//maeria 'factory' that can learn and create new materia based on type
class IMateriaSource {
	
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0; // store a materia probably clone it and save 
		virtual AMateria* createMateria(std::string const & type) = 0; //return an instance of materia
};

#endif
