/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:02:22 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 11:59:12 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->box[i] = NULL;
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& other )
{
	*this = other;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator = ( const MateriaSource& other )
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->box[i] != NULL)
				delete box[i];
			this->box[i] = other.box[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->box[i])
			delete box[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;	
}

void		MateriaSource::learnMateria( AMateria* materia )
{
	for	(int i = 0; i < 4; i++)
	{
		if (!this->box[i])
		{
			this->box[i] = materia;
			std::cout << this->box[i]->getType() << " learned with success" << std::endl;
			return ;
		}
	}
	std::cout << "there is not empty box to learn new materia" << std::endl;
}

void		MateriaSource::forgetMateria( int idx )
{
	if (this->box[idx])
	{
		delete this->box[idx];
		this->box[idx] = NULL;
		std::cout << "Forget materia with success" << std::endl;
		return ;
	}
	std::cout << "there is not a materia in this index box" << std::endl;
}

void		MateriaSource::takeMateria( int idx, ICharacter& target )
{
	if (this->box[idx])
		this->box[idx]->use( target );
}


AMateria*	MateriaSource::createMateria( std::string const & type )
{
	AMateria*	ptr = NULL;
	
	if ( type == "ice")
		ptr = new Ice( type );
	else if ( type == "cure")
		ptr = new Cure( type );
	else
	{
		std::cout << "Unknown materia type" << std::endl;
		return 0;
	}
	return ptr;
}
