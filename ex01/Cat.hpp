/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:23:14 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 17:32:05 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain	*brainPtr;
	
	public:
		
		Cat( std::string typeName );
		~Cat();
		Cat( const Cat& other );
		Cat&	operator = ( const Cat& other );
		
		void	makeSound() const;
		void	callBrain() const;

};

#endif