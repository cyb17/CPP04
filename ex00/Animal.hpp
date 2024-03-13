/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:36:48 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 11:45:34 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal
{
	protected:
		std::string	type;
	
	public:
		
		Animal( std::string typeName );
		virtual ~Animal();
		Animal( const Animal& other );
		Animal&	operator = ( const Animal& other );

		virtual std::string		getType() const;
		virtual void			makeSound() const;
};

#endif