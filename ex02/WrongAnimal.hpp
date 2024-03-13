/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:36:48 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 11:45:34 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>

class	WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		
		WrongAnimal( std::string typeName );
		virtual ~WrongAnimal();
		WrongAnimal( const WrongAnimal& other );
		WrongAnimal&	operator = ( const WrongAnimal& other );

		virtual std::string		getType() const;
		void					makeSound() const;
};

#endif