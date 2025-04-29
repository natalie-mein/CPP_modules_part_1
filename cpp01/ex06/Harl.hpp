/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:36:46 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/12 16:36:48 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <map>

class   Harl {

    private:
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);
    
    public:
        Harl();
        ~Harl();

        void complain(std::string level);
};

#endif
