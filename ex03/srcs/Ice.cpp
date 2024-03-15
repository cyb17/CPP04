/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:41:41 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 17:20:18 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"
#include <iostream>

Ice::Ice( std::string const& type ) : AMateria( type )
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice( const Ice& other ) : AMateria( other )
{
	*this = other;
	std::cout << "Ice copy constructor called" << std::endl;
}
Ice&	Ice::operator = ( const Ice& other )
{
	if (this != &other)
		AMateria::operator = ( other );
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;	
}

AMateria*	Ice::clone() const
{
	return new Ice( "ice" );
}

void 		Ice::use( ICharacter& target )
{
	std::cout << "\e[34;1m" << this->getType() << " * shoot an ice bolt at " << target.getName() << " *" << "\e[0m" << std::endl;
}