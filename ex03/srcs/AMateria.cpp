/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:21:21 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 11:41:48 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
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

void	AMateria::use( ICharacter& target )
{
	std::cout << this->getType() << " did nothing to" << target.getName() << std::endl;
}