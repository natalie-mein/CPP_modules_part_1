/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:54:16 by nmeintje          #+#    #+#             */
/*   Updated: 2025/03/28 14:53:32 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::cout << MAGENTA << "\n\t******************************************" << std::endl;
	std::cout << "               \t       Abstract Classes              " << std::endl;
	std::cout << "\t******************************************" << DEFAULT << std::endl;

	std::cout << "\n\tIt's not possible to create an object of an " << std::endl
			  << "\tabstract class. You can create an object derived" << std::endl
			  << "\tfrom an abstract class. Animal has a pure virtual" << std::endl
			  << "\tfunction:" << std::endl
			  << "\t\tvirtual void makeSound() const = 0;" << std::endl
			  << "\tso it is now an abstract class, and it cannot be" << std::endl
			  << "\tinstantiated, but Cat and Dog, as derived classes," <<std::endl
			  << "\tcan be instantiated. Uncomment the commented 'Animal' " <<std::endl
			  << "\trelated code below to see." << std::endl;


	std::cout << MAGENTA << "\n******************************************" << std::endl;
	std::cout << "           Constructing Animals           " << std::endl;
	std::cout << "******************************************" << DEFAULT << std::endl;
	
	//const Animal* meta = nullptr; //new Animal();
	const Animal* j = nullptr; //new Dog();
	const Animal* i = nullptr; //new Cat();
	
	try {
		//meta = new Animal;
		i = new Dog;
		j = new Cat;
		
		std::cout << MAGENTA << "\n******************************************" << std::endl;
		std::cout << "                Animal Types              " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;
	
		//std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
	
		std::cout << MAGENTA << "\n******************************************" << std::endl;
		std::cout << "               Animal Sounds              " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;
	
		i->makeSound();
		j->makeSound();
		//meta->makeSound();
	
		std::cout << MAGENTA << "\n******************************************" << std::endl;
		std::cout << "            Animal Destructors           " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;
	}
	catch (std::bad_alloc& e) {
		std::cout << "Memory allocation failed." << e.what() << std::endl;
		delete	i;
		delete	j;
		//delete	meta;
		return 1;
	}

	delete	i;
	delete	j;
	//delete	meta;
	
	std::cout << MAGENTA << "\n******************************************" << std::endl;
        std::cout << "Constructing Wrong Animals  (not abstract)         " << std::endl;
        std::cout << "******************************************" << DEFAULT << std::endl;

	const WrongAnimal* beta = nullptr;
	const WrongAnimal* k = nullptr;

	try {
		beta = new WrongAnimal;
		k = new WrongCat;

		std::cout << MAGENTA << "\n******************************************" << std::endl;
                std::cout << "            Wrong Animal Types              " << std::endl;
                std::cout << "******************************************" << DEFAULT << std::endl;

		std::cout << beta->getType() << std::endl;
		std::cout << k->getType() << std::endl;

		std::cout << MAGENTA << "\n******************************************" << std::endl;
                std::cout << "          Wrong Animal Sounds              " << std::endl;
                std::cout << "******************************************" << DEFAULT << std::endl;

		beta->makeSound();
		k->makeSound();
	}
	catch (std::bad_alloc& e) {
		std::cout << "Memory allocation failed." << e.what() << std::endl;
		delete k;
		delete beta;
		return 1;
	}

	std::cout << MAGENTA << "\n******************************************" << std::endl;
        std::cout << "         Wrong Animal Destructors           " << std::endl;
        std::cout << "******************************************" << DEFAULT << std::endl;

	delete k;
	delete beta;
	
	return 0;
}