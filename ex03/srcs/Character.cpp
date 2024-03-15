/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:59:36 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 18:38:34 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include <iostream>

Character::Character( const std::string nm ) : ICharacter()
{
	this->name = nm;
	this->MateriaSource = new class MateriaSource();
	std::cout << "Character constructor called" << std::endl;
}

Character::Character( const Character& other )
{
	this->MateriaSource = new class MateriaSource();
	*this = other;
	std::cout << "Character copy constructor called" << std::endl;
}

Character&	Character::operator = ( const Character& other )
{
	if (this != &other)
	{
		this->name = other.name;
		if (this->MateriaSource != NULL)
			delete this->MateriaSource;
		this->MateriaSource = new class MateriaSource( *other.MateriaSource );
	}
	return *this;
}

Character::~Character()
{
	delete this->MateriaSource;
	std::cout << "Character destructor called" << std::endl;	
}

std::string const&	Character::getName() const
{
	return this->name;	
}

void	Character::equip(AMateria* m)
{
	MateriaSource->learnMateria( m );
	for (int i = 0; i < 4; i++)
	{
		if (!this->equiped[i] && this->lastLearned)
		{
			this->equiped[i] = this->lastLearned;
			std::cout << "\e[33;1m" << this->lastlearned->getType() << ": equiped with success"  << "\e[0m" << std::endl;
		}
	}
	std::cout << "\e[91m" << "There is not a empty equipedBox to equipe new materia" << "\e[0m" << std::endl;
}

void 	Character::unequip( int idx )
{
	if (idx > 3)
	{}
	// MateriaSource->forgetMateria( idx );
}

void	Character::use( int idx, ICharacter& target )
{
	MateriaSource->useMateria( idx, target );
}

