/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:24:22 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 11:40:44 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( std::string typeName ) : Animal( typeName )
{
	this->type = typeName;
	std::cout << "Cat constructor called" << std::endl;	
}

Cat::~Cat()
{	
	std::cout << "Cat destructor called" << std::endl;	
}

Cat::Cat( const Cat& other ) : Animal( other )
{
	std::cout << "Cat copie constructor called" << std::endl;
	*this = other;
}

Cat&	Cat::operator = ( const Cat& other )
{
	this->type = other.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat : Miaow! Miaow!" << std::endl;
}