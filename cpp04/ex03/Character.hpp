/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:47:37 by nmeintje          #+#    #+#             */
/*   Updated: 2025/04/14 13:47:39 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
	
	private:
		AMateria    *_inventory[4];
		std::string _name;
		
	public:
		Character(void);
		Character(std::string const &type);
		Character(const Character& copy);
		Character &operator=(const Character &other);
		~Character(void);

		std::string const   &getName(void) const override;
		
		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;
};

#endif