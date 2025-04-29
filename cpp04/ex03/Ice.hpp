/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:02:57 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/31 16:02:58 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
    
    private:
    /* data */
    
    public:
        Ice(void);
        Ice(std::string const &type);
        Ice(const Ice& copy);
        Ice &operator=(const Ice &other);
        ~Ice(void);

        Ice *clone(void) const override;
        void use(ICharacter& target) override;
};

#endif