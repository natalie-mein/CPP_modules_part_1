/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:35:45 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/04 17:35:47 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	firstName = "";
	lastName = "";
	nickname = "";
	phoneNumber = "";
	darkestSecret = "";
}

Contact::~Contact() {}

void Contact::setContact(std::string first_name, std::string last_name, 
			std::string nick, std::string phone, std::string secret) 
{
	firstName = first_name;
	lastName = last_name;
	nickname = nick;
	phoneNumber = phone;
	darkestSecret = secret;
}

void Contact::displayBrief(int index) const 
{
	std::string first_name = firstName;
	std::string last_name = lastName;
	std::string nick = nickname;

	if (first_name.length() > 10)
		first_name = first_name.substr(0, 9) + ".";
	if (last_name.length() > 10)
		last_name = last_name.substr(0, 9) + ".";
	if (nick.length() > 10)
		nick = nick.substr(0, 9) + ".";

	std::cout << std::setw(10) << index << " | "
			  << std::setw(10) << first_name << " | "
			  << std::setw(10) << last_name << " | "
			  << std::setw(10) << nick << "\n";
}

void Contact::displayFull() const {
	std::cout << "First Name: " << firstName << "\n"
			  << "Last Name: " << lastName << "\n"
			  << "Nickname: " << nickname << "\n"
			  << "Phone Number: " << phoneNumber << "\n"
			  << "Darkest Secret: " << darkestSecret << "\n";
}
