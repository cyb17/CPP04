/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:18:59 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 12:15:03 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/IMateriaSource.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << "\e[92m" << "---------learnMateria------------" << "\e[0m\n\n";
	src->learnMateria(new Ice( "ice" ));
	src->learnMateria(new Cure( "cure" ));
	std::cout << "\e[92m" << "--------------------------------" << "\e[0m\n\n";
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	std::cout << "\e[92m" << "----------createMateria----------" << "\e[0m\n\n";
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "\e[92m" << "--------------------------------" << "\e[0m\n\n";
	ICharacter* bob = new Character("bob");
	std::cout << "\e[92m" << "---------------use----------------" << "\e[0m\n\n";
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "\e[92m" << "------------destructor------------" << "\e[0m\n\n";
	
	delete bob;
	std::cout << "\e[92m" << "--------------------------------" << "\e[0m\n\n";
	delete me;
	std::cout << "\e[92m" << "--------------------------------" << "\e[0m\n\n";
	delete src;
	
	return 0;
}