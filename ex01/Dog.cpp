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
	this->brainPtr = new Brain();
	std::cout << "Dog constructor called" << std::endl;	
}

Dog::~Dog()
{	
	delete this->brainPtr;
	std::cout << "Dog destructor called" << std::endl;	
}

Dog::Dog( const Dog& other ) : Animal( other )
{
	this->brainPtr = new Brain();
	*this = other;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator = ( const Dog& other )
{
	if ( this != &other )
	{
		this->type = other.type;
		if (this->brainPtr != NULL)
			delete this->brainPtr;
		if (other.brainPtr != NULL)
			this->brainPtr = new Brain( *other.brainPtr );
		else
			this->brainPtr = NULL;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog : Woaf! Woaf!" << std::endl;
}

void	Dog::callBrain() const
{
	this->brainPtr->listTenIdeas();
}
