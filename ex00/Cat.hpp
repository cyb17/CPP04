/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:23:14 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 11:40:38 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		
		Cat( std::string typeName );
		~Cat();
		Cat( const Cat& other );
		Cat&	operator = ( const Cat& other );
		
		void	makeSound() const;
};

#endif