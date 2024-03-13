/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:59:03 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 16:00:27 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain	*brainPtr;
	
	public:
		
		Dog( std::string typeName );
		~Dog();
		Dog( const Dog& other );
		Dog&	operator = ( const Dog& other );
		
		void	makeSound() const;
		void	callBrain() const;
};

#endif