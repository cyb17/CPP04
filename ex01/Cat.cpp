/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:24:22 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 10:24:48 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( std::string typeName ) : Animal( typeName )
{
	this->type = typeName;
	this->brainPtr = new Brain();
	std::cout << "Cat constructor called" << std::endl;	
}

Cat::~Cat()
{	
	delete this->brainPtr;
	std::cout << "Cat destructor called" << std::endl;	
}

Cat::Cat( const Cat& other ) : Animal( other )
{
	this->brainPtr = new Brain();
	*this = other;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator = ( const Cat& other )
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

void	Cat::makeSound() const
{
	std::cout << "Cat : Miaow! Miaow!" << std::endl;
}

void	Cat::callBrain() const
{
	this->brainPtr->listTenIdeas();
}
