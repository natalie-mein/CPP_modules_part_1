/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:58:35 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/11 14:58:37 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class   Weapon {
	private:
		std::string _type;

	public:
		Weapon(const std::string &weapon);
		~Weapon();

		const std::string& getType(void) const; //returns a const reference to 'type'
		void setType(const std::string &weapon); // sets type using the new one passed as param
};

#endif
