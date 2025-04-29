/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:57:28 by nmeintje          #+#    #+#             */
/*   Updated: 2025/02/24 16:42:32 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	count = 0;
	oldestIndex = 0;
}

PhoneBook::~PhoneBook() {}

void    PhoneBook::addContact()
{
	std::string first_name, last_name, nick, phone, secret;

	std::cout << "Enter First Name: " << std::endl;
	if (!std::getline(std::cin, first_name)) {
        if (std::cin.eof()) {
            std::cout << "\nEOF detected. Exiting Program.\n";
            std::exit(0);
        }
        std::cerr << "Input error!\n";
        return;
    }
	
	std::cout << "Enter Last Name: " << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "Enter Nickname: " << std::endl;
	std::getline(std::cin, nick);
	std::cout << "Enter Phone Number: " << std::endl;
	std::getline(std::cin, phone);
	std::cout << "Enter Darkest Secret: " << std::endl;
	std::getline(std::cin, secret);

	if (std::cin.eof()) {
		std::cout << "you have reached EOF " << std::endl;
	}

	if (first_name.empty() || last_name.empty() || nick.empty() 
		|| phone.empty() || secret.empty()) {
		std::cout << "Error: Fields cannot be empty!" << std::endl;
		return;
		}

	if (count < 8) {
		contacts[count].setContact(first_name, last_name, nick, phone, secret);
		count++;
	}    else {
		std::cout << "Phonebook is full! Replacing oldest contact..." << std::endl;
		contacts[oldestIndex].setContact(first_name, last_name, nick, phone, secret);
		oldestIndex = (oldestIndex + 1) % 8;
	}
}

void    PhoneBook::displayContacts() const
{
	std::cout << std::setw(10) << "Index" << " | "
			  << std::setw(10) << "First Name" << " | "
			  << std::setw(10) << "Last Name" << " | "
			  << std::setw(10) << "Nickname" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;

	for (int i = 0; i < count; i++) {
		contacts[i]. displayBrief(i);
	}
}

void    PhoneBook::searchContact() const
{
	if (count == 0) {
		std::cout << "No contacts available" << std::endl;
		return;
	}

	displayContacts();

	std::cout << "Enter contact index: ";

	if (std::cin.eof()) {
            std::cout << "\nEOF detected. Exiting Program.\n";
            std::exit(0);
    }

    std::string input;
	std::getline(std::cin, input);

	if (input.length() != 1 || !isdigit(input[0])) {
		std::cout << "Invalid index!" << std::endl;
		return;
	}

	int index = input[0] - '0';
	if (index >= count || index < 0) {
		std::cout << "Index out of range!" << std::endl;
		return;
	}

	contacts[index].displayFull();
}

