/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:00:58 by nmeintje          #+#    #+#             */
/*   Updated: 2025/02/24 16:42:39 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int count;
		int oldestIndex;

	public:
		PhoneBook();
		~PhoneBook();

		void addContact();
		void searchContact() const;
		void displayContacts() const;       
};

#endif
