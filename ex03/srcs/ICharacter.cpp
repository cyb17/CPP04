/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:50:28 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 11:58:41 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ICharacter.hpp"
#include <iostream>

ICharacter::ICharacter()
{
	std::cout << "ICharacter constructor called" << std::endl;
}

ICharacter::ICharacter( const ICharacter& other )
{
	*this = other;
	std::cout << "ICharacter copy constructor called" << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructor called" << std::endl;	
}
