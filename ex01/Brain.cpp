/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:22:51 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 17:19:15 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	this->fullIdeasTab();
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( const Brain& other )
{
	*this = other;
}

Brain&	Brain::operator = ( const Brain& other )
{
	if ( this != &other )
	{
		for ( int i = 0; i < 100; i++ )
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

void	Brain::fullIdeasTab()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea";
}

void	Brain::listTenIdeas() const
{
	for (int i = 0; i < 10; i++)
		std::cout << "idears " << i << ": "<< this->ideas[i] << std::endl;
}