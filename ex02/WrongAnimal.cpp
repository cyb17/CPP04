/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:42:04 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 11:40:23 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( std::string typeName )
{
	this->type = typeName;
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{	
	std::cout << "WrongAnimal destructor called" << std::endl;	
}

WrongAnimal::WrongAnimal( const WrongAnimal& other)
{
	*this = other;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator = ( const WrongAnimal& other )
{
	if ( this != &other )
		this->type = other.type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal : Rien ! Rien !" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}