/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:21:21 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 11:40:23 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria( std::string const& type ) : type (type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria( const AMateria& other )
{
	*this = other;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria&	AMateria::operator = ( const AMateria& other )
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const&	AMateria::getType() const
{
	return this->type;
}

virtual void	AMateria::use( ICharacter& target )
{
	std::cout << "Nothing to do" << std::endl;
}