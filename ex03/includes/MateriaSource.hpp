/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:05:48 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 14:06:14 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "interfaces/IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria*	ptrMateria[4];

	public:

		MateriaSource();
		MateriaSource( const MateriaSource& other );
		MateriaSource&	operator = ( const MateriaSource& other );
		~MateriaSource();

		void 		learnMateria( AMateria* materia );
		AMateria*	createMateria( std::string const & type );
		
};

#endif