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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define SIZE 10

int main()
{
	std::cout << CYAN << "\n******************************************" << std::endl;
	std::cout << "           Constructing Animals           " << std::endl;
	std::cout << "******************************************" << DEFAULT << std::endl;
	
	int	i = 0;
	const Animal* meta[SIZE];
	
	try {
		while (i < SIZE)
		{
			if (i % 2 == 0)
			{
				meta[i] = new Dog;
				std::cout << std::endl;
			}
			else
			{
				meta[i] = new Cat;
				std::cout << std::endl;
			}
			i++;
		}
		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "                Animal Types              " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;
	
		for (int i = 0; i < SIZE; i++)
		{
			std::cout << "\t" << meta[i]->getType() << " " << std::endl;
		}
	
		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "               Animal Sounds              " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;
	
		for (int i = 0; i < SIZE; ++i)
		{
			meta[i]->makeSound();
		}
	
		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "               Animal Destructors           " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;
	}
	catch (std::bad_alloc& e) {
		std::cerr << "Memory allocation failed." << e.what() << std::endl;
		for (int i = 0; i < SIZE; ++i) {
			delete meta[i];
			std::cout << std::endl;
		}
		return 1;
	}

	for (int i = 0; i < SIZE; ++i)
	{
		delete meta[i];
		std::cout << std::endl;
	}

	try {
		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "            Deep Copy Survival Test                 " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;

		Dog* originalDog = new Dog();
		originalDog->getBrain()->setIdea(0, "I want a bone.");
		std::cout << std::endl;
		Dog copiedDog(*originalDog);  // copy constructor
		std::cout << std::endl;
		delete originalDog; // should not affect copiedDog
		std::cout << std::endl;
		std::cout << "Copied dog idea[0] after deleting original: "  
				  << copiedDog.getBrain()->getIdea(0) << std::endl;
		copiedDog.getBrain()->setIdea(1, "I miss my clone friend.");
		std::cout << "Copied dog idea[1] (new): "
				  << copiedDog.getBrain()->getIdea(1) << std::endl;

		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "            Deep Copy Testers                 " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;

		Dog fido;
		Dog scruffy(fido); // Using copy constructor
		Dog fluffy = fido; // assignment constructor

		Cat whiskers;
		Cat pierre(whiskers);
		Cat eleanor = whiskers;
		
		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "               Dog Default Ideas                 " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;
		
		std::cout << "fido ideas[0]: " << fido.getBrain()->getIdea(0) << std::endl
				  << "scruffy ideas[0]: " << scruffy.getBrain()->getIdea(0) << std::endl
				  << "fluffy ideas[0]: " << fluffy.getBrain()->getIdea(0) << std::endl;

		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "               Dog Brain Addresses                 " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;
		
		std::cout << "Address of fido's Brain: " << fido.getBrain() << std::endl
				  << "Address of scruffy's Brain: " << scruffy.getBrain() << std::endl
				  << "Address of fluffy's Brain: " << fluffy.getBrain() << std::endl;

		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "               Cat Default Ideas                 " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;

		std::cout << "whiskers ideas[0]: " << whiskers.getBrain()->getIdea(0) << std::endl
				  << "pierre ideas[0]: " << pierre.getBrain()->getIdea(0) << std::endl
				  << "eleanor ideas[0]: " << eleanor.getBrain()->getIdea(0) << std::endl;
		
		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "               Cat Brain Addresses                 " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;
				  
		std::cout << "Address of whiskers' Brain: " << whiskers.getBrain() << std::endl
				  << "Address of pierre's Brain: " << pierre.getBrain() << std::endl
				  << "Address of eleanor's Brain: " << eleanor.getBrain() << std::endl;

		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "               Dog New Ideas                 " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;

		std::cout << "fido new idea: 'Squirrel!'" << std::endl;
		fido.getBrain()->setIdea(0, "Squirrel!");
		std::cout << "scruffy new idea: 'Treat time! Treat time!'" << std::endl;
		scruffy.getBrain()->setIdea(0, "Treat time! Treat time!");
		std::cout << "fluffy new idea: 'Zoomies!'" << std::endl;
		fluffy.getBrain()->setIdea(0, "Zoomies!");

		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "               Cat New Ideas                 " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;

		std::cout << "whiskers new idea: 'Why must the dog torment me so?'" << std::endl;
		whiskers.getBrain()->setIdea(1, "Why must the dog torment me so?");
		std::cout << "pierre new idea: 'When will I be fed? They're trying to starve me'" << std::endl;
		pierre.getBrain()->setIdea(1, "When will I be fed? They're trying to starve me");
		std::cout << "eleanor new idea: 'Petting is nice. Three more seconds and then bite'" << std::endl;
		eleanor.getBrain()->setIdea(1, "Petting is nice. Three more seconds and then bite");

		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "          Get Animal Ideas                 " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;

		std::cout << "fido ideas (original):" << fido.getBrain()->getIdea(0) << std::endl;
		std::cout << "scruffy ideas (copy):" << scruffy.getBrain()->getIdea(0) << std::endl;
		std::cout << "fluffy ideas (assignment):" << fluffy.getBrain()->getIdea(0) << std::endl;
		std::cout << std::endl;
		std::cout << "whiskers ideas (original):" << whiskers.getBrain()->getIdea(1) << std::endl;
		std::cout << "pierre ideas (copy):" << pierre.getBrain()->getIdea(1) << std::endl;
		std::cout << "eleanor ideas (assignment):" << eleanor.getBrain()->getIdea(1) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "\n******************************************" << std::endl;
		std::cout << "       Deep Copy Testers: Destructors                 " << std::endl;
		std::cout << "******************************************" << DEFAULT << std::endl;
	
	}
	catch (std::bad_alloc& e) {
		std::cerr << "Memory allocation failed." << e.what() << std::endl;
		return 1;
	}

	return 0;
}
