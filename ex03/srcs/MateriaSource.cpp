/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:02:22 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 16:05:27 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->ptrMateria[i] = NULL;
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& other );
{
	for (int i = 0; i < 4; i++)
		this->ptrMateria[i] = NULL;
	*this = other;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}
MateriaSource&	MateriaSource::operator = ( const MateriaSource& other );
{
	if (this != &other)
	{
		IMateriaSource::operator = ( other );
		for (int i = 0; i < 4; i++)
		{
			if (this->ptrMateria[i] != NULL)
				delete ptrMateria[i];
			this->ptrMateria[i] = new AMateria( other.ptrMateria[i] );
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->ptrMateria[i])
			delete ptrMateria[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;	
}

// void		MateriaSource::learnMateria( AMateria* materia )
// {
// 	for	(int i = 0; i < 4; i++)
// 	{
// 		if (!this->ptrMateria[i])
// 		{
// 			this->ptrMateria[i] = new AMateria( materia );
// 			std::cout << this->ptrMateria[i].getType() << " learned with success" << std::endl;
// 		}
// 	}
// }

// AMateria*	MateriaSource::createMateria( std::string const & type )
// {
// 	AMateria*	ptr;
	
// 	if ( type == "ice")
// 		ptr = new Ice( type );
// 	else if ( type == "cure")
// 		ptr = new cure( type );
// 	else
// 		return 0;
// 	return ptr;
// }
