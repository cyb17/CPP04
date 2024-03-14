/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:04:20 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 10:24:48 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( std::string typeName ) : Animal( typeName )
{
	this->type = typeName;
	std::cout << "Dog constructor called" << std::endl;	
}

Dog::~Dog()
{	
	std::cout << "Dog destructor called" << std::endl;	
}

Dog::Dog( const Dog& other ) : Animal( other )
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog&	Dog::operator = ( const Dog& other )
{
	if ( this != &other )
		this->type = other.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog : Woaf! Woaf!" << std::endl;
}