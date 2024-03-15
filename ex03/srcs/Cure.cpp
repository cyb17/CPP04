/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:56:15 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 17:19:26 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"
#include <iostream>

Cure::Cure( std::string const& type ) : AMateria( type )
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure( const Cure& other ) : AMateria( other )
{
	*this = other;
	std::cout << "Cure copy constructor called" << std::endl;
}
Cure&	Cure::operator = ( const Cure& other )
{
	if (this != &other)
		AMateria::operator = ( other );
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;	
}

AMateria*	Cure::clone() const
{
	return new Cure( "cure" );
}

void 		Cure::use( ICharacter& target )
{
	std::cout << "\e[32;1m" << this->getType() << " * heals " << target.getName() << "'s wounds *" << "\e[0m" << std::endl;
}