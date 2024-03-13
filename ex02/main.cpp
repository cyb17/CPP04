/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:50:42 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 18:16:51 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

// int	main( void )
// {
	// Animal	*animal[6];
	// Dog		dog( "Dog" );
	// Dog		copieDog( dog );
	// Cat		cat( "cat" );
	// Cat		copieCat( cat );
// 
	// for (int i = 0; i < 6; i++)
	// {
		// if (i < 3)
			// animal[i] = new Cat( "cat" );
		// else
			// animal[i] = new Dog( "dog" );
	// }
	// for (int j = 0; j < 6; j++)
		// delete	animal[j];
	// dog.callBrain();
	// copieDog.callBrain();
	// cat.callBrain();
	// copieCat.callBrain();
	// return 0;
// }

int main()
{
	Dog		dog( "Dog" );
	Dog		copieDog( dog );
	Cat		cat( "cat" );
	Cat		copieCat( cat );

	dog.callBrain();
	copieDog.callBrain();
	cat.callBrain();
	copieCat.callBrain();
	// Animal	animal( "" );
	return 0;
}