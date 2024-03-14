/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:41:41 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 11:58:34 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice( std::string const& type ) : AMateria( type )
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice( const Ice& other );
{
	*this = other;
	std::cout << "Ice copy constructor called" << std::endl;
}
Ice&	Ice::operator = ( const Ice& other );
{
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
	std::cout << this->getType() << " * shoot an ice bolt at " << target.getName() << " *" << std::endl;
}