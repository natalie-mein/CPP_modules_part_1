/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:03:17 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/31 16:03:19 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

    private:
    /* data */

    public:
        Cure(void);
        Cure(std::string const &type);
        Cure(const Cure& copy);
        Cure &operator=(const Cure &other);
        ~Cure(void);

        Cure* clone(void) const override;
        void use(ICharacter& target) override;
};

#endif