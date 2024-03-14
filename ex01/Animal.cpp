/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:42:04 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 10:24:48 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( std::string typeName )
{
	this->type = typeName;
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{	
	std::cout << "Animal destructor called" << std::endl;	
}

Animal::Animal( const Animal& other)
{
	*this = other;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal&	Animal::operator = ( const Animal& other )
{
	if ( this != &other )
		this->type = other.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal : Rien ! Rien !" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}
