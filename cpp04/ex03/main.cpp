/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:54:16 by nmeintje          #+#    #+#             */
/*   Updated: 2025/04/10 14:08:49 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << RED << "\n******************************************" << std::endl;
	std::cout << "                Basic Tests                   " << std::endl;
	std::cout << "******************************************" << DEFAULT << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	
	std::cout << RED << "\n******************************************" << std::endl;
	std::cout << "                Fun Tests                   " << std::endl;
	std::cout << "******************************************" << DEFAULT << std::endl;

	// Create materia source and learn some spells
	IMateriaSource* source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());

	std::cout << "\n--- Creating Hero ---\n";
	ICharacter* hero = new Character("Aeris");

	std::cout << "\n--- Creating Materias ---\n";
	AMateria* spell1 = source->createMateria("ice");
	AMateria* spell2 = source->createMateria("cure");
	AMateria* spell3 = source->createMateria("fire"); // should not exist

	std::cout << "\n--- Equipping Hero ---\n";
	hero->equip(spell1);
	hero->equip(spell2);
	hero->equip(spell3); // should fail

	std::cout << "\n--- Creating Sidekick ---\n";
	ICharacter* sidekick = new Character("Bobo");

	std::cout << "\n--- Hero uses materia on Sidekick ---\n";
	hero->use(0, *sidekick); // ice
	hero->use(1, *sidekick); // cure
	hero->use(2, *sidekick); // nothing

	std::cout << "\n--- Hero unequips ice ---\n";
	hero->unequip(0); // remove ice
	hero->use(0, *sidekick); // should do nothing

	std::cout << "\n--- Clone spell and re-equip ---\n";
	AMateria* cloned = spell2->clone(); // clone cure
	hero->equip(cloned); // should go in slot 0

	std::cout << "\n--- Using cloned materia ---\n";
	hero->use(0, *sidekick); // cure again

	std::cout << "\n--- Cleanup ---\n";
	delete source;
	delete hero;
	delete sidekick;
	// spell1, spell2, spell3, cloned are either equipped or not, if unequipped you must manage them
	delete spell3; // spell3 wasn't equipped (nullptr anyway)
	// spell1 was unequipped and not deleted, should clean it up:
	delete spell1;

	return 0;
}