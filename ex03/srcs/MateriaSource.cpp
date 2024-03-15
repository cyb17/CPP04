/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:02:22 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 18:29:23 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->equiped[i] = NULL;
	for (int i = 0; i < 10; i++)
	{
		this->learned[i] = NULL;
		this->unequiped[i] = NULL;
	}
	this->lastLearned = NULL;
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
			if (this->equiped[i] != NULL)
			{
				delete this->equiped[i];
				this->equiped[i] = NULL;
			}
			if (other.equiped[i])
				this->equiped[i] = other.equiped[i]->clone();
		}
		for (int i = 0; i < 10; i++)
		{
			if (this->learneded[i] != NULL)
			{
				delete this->learned[i];
				this->learned[i] = NULL;
			}
			if (this->unequiped[i] != NULL)
			{
				delete this->unequiped[i];
				this->unequiped[i] = NULL;
			}
			if (other.unequiped[i])
				this->unequiped[i] = other.unequiped[i]->clone();
			if (otherlearned[i])
				this->learned[i] = other.learned[i]->clone();
	}	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->equiped[i])
			delete this->equiped[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (this->unequiped[i])
			delete this->unequiped[i];
		if (this->learned[i])
			delete this->learned[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;	
}

void		MateriaSource::learnMateria( AMateria* materia )
{
	for	(int i = 0; i < 10; i++)
	{
		if (!this->learned[i])
		{
			if (materia->getType() == "ice" || materia->getType() == "cure")
			{
				this->learned[i] = materia;
				this->lastLearned = learned[i];
				std::cout << "\e[33;1m" << this->learned[i]->getType() << ": Learned with success"  << "\e[0m" << std::endl;
			}
			else
			{
				std::cout << "\e[91m" << this->learned[i]->getType() << "Learn failed :unknown materia type" << "\e[0m" << std::endl;
				this->lastLearned = NULL;
			}
			return ;
		}
	}
	this->lastLearned = NULL;
	std::cout << "\e[91m" << "there is not empty learnedBox to learn new materia" << "\e[0m" << std::endl;
}

void		MateriaSource::forgetMateria( int idx )
{
	if (idx < 10 && this->unequiped[idx])
	{
		std::cout << "\e[31;1m" << this->unequiped[idx]->getType() << ": Forget  with success" << "\e[0m" << std::endl;
		delete this->unequiped[idx];
		this->unequiped[idx] = NULL;
		return ;
	}
	if (idx < 10)
		std::cout << "\e[91m" << "There is not a materia to be forget in this index unequipeBox" << "\e[0m" << std::endl;
	else
		std::cout << "\e[91m" << "this index unequipedBox doesn't existe" << "\e[0m" << std::endl;
}

void		MateriaSource::useMateria( int idx, ICharacter& target )
{
	if (idx  < 4)
		std::cout << "\e[91m" << "this index equipedBox doesn't existe" << "\e[0m" << std::endl;
	else if (this->equiped[idx])
		this->equiped[idx]->use( target );
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
		std::cout << "\e[91m" << "Can not creat a unknown materia type" << "\e[0m" << std::endl;
		return 0;
	}
	return ptr;
}
