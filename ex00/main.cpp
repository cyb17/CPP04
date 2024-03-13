/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:50:42 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 12:03:06 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

// int	main( void )
// {
// 	Animal	animal( "animal" );
// 	Dog		dog( "Dog" );
// 	Cat		cat( "Cat" );
	
// 	animal.makeSound();
// 	dog.makeSound();
// 	cat.makeSound();
	
// 	return 0;
// }

int main()
{
	const Animal* meta = new Animal( "" );
	const Animal* j = new Dog( "Dog" );
	const Animal* i = new Cat( "Cat" );
	const WrongAnimal* e = new WrongAnimal( "WrongAnimal" );
	const WrongAnimal* f = new WrongCat( "WrongCat" );
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << e->getType() << " " << std::endl;
	std::cout << f->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	e->makeSound();
	f->makeSound();
	
	delete	meta;
	delete	i;
	delete	j;
	delete	e;
	delete	f;

	return 0;
}