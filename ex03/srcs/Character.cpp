/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:59:36 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 16:02:34 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character( const std::string nm ) : ICharacter()
{
	this->name = nm;
	this->MateriaSource = new MateriaSource();
	std::cout << "Character constructor called" << std::endl;
}

Character::Character( const Character& other );
{
	this->MateriaSource = new MateriaSource();
	*this = other;
	std::cout << "Character copy constructor called" << std::endl;
}
Character&	Character::operator = ( const Character& other );
{
	if (this != &other)
	{
		this->name = other.name;
		if (this->MateriaSource != NULL)
			delete this->MateriaSource;
		this->MateriaSource = new MateriaSource( *other.MateriaSource );
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
	
}
		void unequip(int idx);
		void use(int idx, ICharacter& target);