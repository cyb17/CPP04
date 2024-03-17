/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:05:48 by yachen            #+#    #+#             */
/*   Updated: 2024/03/17 15:14:07 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

#define EQ_SIZE 4
#define UNEQ_SIZE 10

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria*	equiped[EQ_SIZE];
		AMateria*	unequiped[UNEQ_SIZE];
		AMateria*	lastLearned;

	public:

		MateriaSource();
		MateriaSource( const MateriaSource& other );
		MateriaSource&	operator = ( const MateriaSource& other );
		~MateriaSource();

		void 		learnMateria( AMateria* materia );
		void		forgetMateria( int idx );
		void		equip( AMateria* m );
		void		unequip( int idx );
		void		useMateria( int idx, ICharacter& target );
		AMateria*	createMateria( std::string const& type );
		void		getMateriaSourceInfo() const;
		
};


#endif