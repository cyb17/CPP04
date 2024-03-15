/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:05:48 by yachen            #+#    #+#             */
/*   Updated: 2024/03/15 18:24:44 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria*	equiped[4];
		AMateria*	learned[10];
		AMateria*	unequiped[10];
		AMateria*	lastLearned;

	public:

		MateriaSource();
		MateriaSource( const MateriaSource& other );
		MateriaSource&	operator = ( const MateriaSource& other );
		~MateriaSource();

		void 		learnMateria( AMateria* materia );
		void		forgetMateria( int idx );
		void		useMateria( int idx, ICharacter& target );
		AMateria*	createMateria( std::string const& type );
		
};


#endif