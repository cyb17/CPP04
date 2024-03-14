/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:13:17 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 11:37:57 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

class	AMateria
{
	protected:
		std::string	type;
	
	public:
		
		AMateria( std::string const& type );
		AMateria( const AMateria& other );
		AMateria&	operator = ( const AMateria& other );
		~AMateria();

		std::string const&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use( ICharacter& target );
};


#endif