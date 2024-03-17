/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:02:22 by yachen            #+#    #+#             */
/*   Updated: 2024/03/17 15:54:07 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < UNEQ_SIZE; i++)
	{
		if (i < EQ_SIZE)
			this->equiped[i] = NULL;
		this->unequiped[i] = NULL;
	}
	this->lastLearned = NULL;
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& other )
{
	for (int i = 0; i < UNEQ_SIZE; i++)
	{
		if (i < EQ_SIZE)
			this->equiped[i] = NULL;
		this->unequiped[i] = NULL;
	}
	this->lastLearned = NULL;
	*this = other;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator = ( const MateriaSource& other )
{
	if (this != &other)
	{
		for (int i = 0; i < UNEQ_SIZE ; i++)
		{
			if (i < EQ_SIZE)
			{
				if (this->equiped[i] != NULL)
					delete this->equiped[i];
				if (other.equiped[i])
					this->equiped[i] = other.equiped[i]->clone();
				else
					this->equiped[i] = NULL;
			}
			if (this->unequiped[i] != NULL)
				delete this->unequiped[i];
			if (other.unequiped[i])
				this->unequiped[i] = other.unequiped[i]->clone();
			else
				this->unequiped[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < UNEQ_SIZE; i++)
	{
		if (i < EQ_SIZE && this->equiped[i])
			delete this->equiped[i];
		if (this->unequiped[i])
			delete this->unequiped[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;	
}

void		MateriaSource::learnMateria( AMateria* materia )
{
	for	(int i = 0; i < EQ_SIZE; i++)
	{
		if (!this->equiped[i] && (materia->getType() == "ice" || materia->getType() == "cure"))
		{
			this->equiped[i] = materia;
			this->lastLearned = equiped[i];
			std::cout << "\e[33;1m" << this->equiped[i]->getType() << ": Learned with success: " << "box: " << i << "\e[0m" << std::endl;
			return ;
		}
		else if (!this->equiped[i] && materia->getType() != "ice" && materia->getType() != "cure")
		{
			std::cout << "\e[91m" << materia->getType() << ": Learn failed: unknown materia type" << "\e[0m" << std::endl;
			this->lastLearned = NULL;
			delete materia;
			return ;
		}
	}
	this->lastLearned = NULL;
	delete materia;
	std::cout << "\e[91m" << "There is no empty equipedBox to learn or equipe new materia" << "\e[0m" << std::endl;
	std::cout << "\e[91m" << "You can unequiped useless materias" << "\e[0m" << std::endl;
}

void		MateriaSource::forgetMateria( int idx )
{
	AMateria*	tmp = this->unequiped[idx];

	if (idx < 0 || idx > UNEQ_SIZE - 1 )
		std::cout << "\e[91m" << "This indexBox: " << idx << " doesn't existe" << "\e[0m" << std::endl;
	if (!tmp)
		std::cout << "\e[91m" << "There is no materia to be forgotten in this indexBox :" << idx << "\e[0m" << std::endl;
	else
	{
		std::cout << "\e[91m" << tmp->getType() << ": Forget with success" << "\e[0m" << std::endl;
		delete tmp;
		tmp = NULL;
	}
}

void	MateriaSource::equip( AMateria* m )
{
	this->learnMateria( m );
	if (!this->lastLearned)
		return ;
	std::cout << "\e[33;1m" << this->lastLearned->getType() << ": Equiped with success"  << "\e[0m" << std::endl;
}

void 	MateriaSource::unequip( int idx )
{
	if (idx < 0 || idx > EQ_SIZE - 1 )
		std::cout << "\e[91m" << "This index: " << idx << " of equipedBox doesn't existe" << "\e[0m" << std::endl;
	else if (!this->equiped[idx])
		std::cout << "\e[91m" << "There is no materia to be unequiped in this indexBox :" << idx << "\e[0m" << std::endl;
	else
	{
		for (int i = 0; i < UNEQ_SIZE; i++)
		{
			if (!this->unequiped[i])
			{
				std::cout << "\e[33;1m" << this->equiped[i]->getType() << ": Unequiped with success: box: " << i << "\e[0m" << std::endl;
				this->unequiped[i] = this->equiped[idx];
				this->equiped[idx] = NULL;
				return ;
			}
		}
		std::cout << "\e[91m" << "There is no empty unequipedBox" << "\e[0m" << std::endl;
		std::cout << "\e[91m" << "You can use : forgetMateria(flag = 1) to delete old unequiped materias" << "\e[0m" << std::endl;
	}
}

void		MateriaSource::useMateria( int idx, ICharacter& target )
{
	if (idx < 0 || idx > EQ_SIZE - 1)
		std::cout << "\e[91m" << "This index: " << idx << " of equipedBox doesn't existe" << "\e[0m" << std::endl;
	else if (!this->equiped[idx])
		std::cout << "\e[91m" << "There is no materia to be used in this indexbox :" << idx << "\e[0m" << std::endl;
	else
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

void		MateriaSource::getMateriaSourceInfo() const
{
	for (int i = 0; i < EQ_SIZE; i++)
	{
		if (this->equiped[i])
			std::cout << "\e[95m" << "EquipedBox " << i << ": " << this->equiped[i]->getType() << "\e[0m" << std::endl;
		else
			std::cout << "\e[95m" << "EquipedBox " << i << ": NULL" << "\e[0m" << std::endl;
	}
	for (int j = 0; j < UNEQ_SIZE; j++)
	{
		if (this->unequiped[j])
			std::cout << "\e[95m" << "UnequipedBox " << j << ": " << this->unequiped[j]->getType() << "\e[0m" << std::endl;
		else
			std::cout << "\e[95m" << "UnequipedBox " << j << ": NULL" << "\e[0m" << std::endl;
	}
	if (this->lastLearned)
		std::cout << "\e[95m" << "lastLearned: " << this->lastLearned->getType() << "\e[0m" << std::endl;
	else
		std::cout << "\e[95m" << "lastLearned: NULL" << "\e[0m" << std::endl;
}