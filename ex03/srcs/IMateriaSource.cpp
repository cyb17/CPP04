/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:53:56 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 11:58:31 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/IMateriaSource.hpp"
#include <iostream>

IMateriaSource::IMateriaSource()
{
	std::cout << "IMateriaSource constructor called" << std::endl;
}

IMateriaSource::IMateriaSource( const IMateriaSource& other )
{
	*this = other;
	std::cout << "IMateriaSource copy constructor called" << std::endl;
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "IMateriaSource destructor called" << std::endl;	
}
