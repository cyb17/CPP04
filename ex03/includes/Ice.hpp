/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:36:31 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 10:46:45 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		
		Ice( std::string const& type );
		Ice( const Ice& other );
		Ice&	operator = ( const Ice& other );
		~Ice();

		AMateria*	clone() const;
		void 		use( ICharacter& target );
};

#endif