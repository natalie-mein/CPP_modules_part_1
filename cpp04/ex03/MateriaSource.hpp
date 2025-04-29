/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:54:31 by nmeintje          #+#    #+#             */
/*   Updated: 2025/04/15 13:54:32 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
    
    private:
        AMateria* _learned[4];
        
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource& other);
        MateriaSource &operator=(const MateriaSource& other);
        ~MateriaSource(void);

        void learnMateria(AMateria* m) override;
        AMateria* createMateria(std::string const& type) override;
};

#endif