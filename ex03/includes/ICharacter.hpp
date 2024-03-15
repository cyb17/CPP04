/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:52:40 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 11:58:28 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

// #include "IMateriaSource.hpp"
// #include "AMateria.hpp"
#include <string>

class AMateria;

class ICharacter
{
	public:
	
		ICharacter();
		ICharacter( const ICharacter& other );
		virtual ~ICharacter();
		virtual std::string const & getName() const = 0;
		virtual void equip( AMateria* m ) = 0;
		virtual void unequip( int idx ) = 0;
		virtual void use( int idx, ICharacter& target ) = 0;
};

#endif