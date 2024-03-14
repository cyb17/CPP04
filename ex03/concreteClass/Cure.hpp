/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:56:43 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 11:44:26 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Cure : public AMateria
{
	public:
		
		Cure( std::string const& type );
		Cure( const Cure& other );
		Cure&	operator = ( const Cure& other );
		~Cure();

		AMateria*	clone() const;
		void		 use( ICharacter& target );
};

#endif