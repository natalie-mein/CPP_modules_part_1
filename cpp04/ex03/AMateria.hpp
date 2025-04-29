/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:45:13 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/31 15:45:15 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"

#define RED "\033[31m"
#define DEFAULT "\033[0;0m"

class ICharacter;

class AMateria {

    protected:
        std::string _type;
    
    public:
        AMateria(void);
        AMateria(std::string const &type);
        AMateria(const AMateria& copy);
        AMateria &operator=(const AMateria &other); // do we need this? can we use it?
        virtual ~AMateria(void);
    
        std::string const &getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
