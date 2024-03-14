/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:24:22 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 10:24:48 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( std::string typeName ) : WrongAnimal( typeName )
{
	this->type = typeName;
	std::cout << "WrongCat constructor called" << std::endl;	
}

WrongCat::~WrongCat()
{	
	std::cout << "WrongCat destructor called" << std::endl;	
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal( other )
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
}

WrongCat&	WrongCat::operator = ( const WrongCat& other )
{
	if ( this != &other )
		this->type = other.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat : Miaow! Miaow!" << std::endl;
}