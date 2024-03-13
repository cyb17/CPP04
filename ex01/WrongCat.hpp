/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:23:14 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 11:40:38 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		
		WrongCat( std::string typeName );
		~WrongCat();
		WrongCat( const WrongCat& other );
		WrongCat&	operator = ( const WrongCat& other );
		
		void	makeSound() const;
};

#endif