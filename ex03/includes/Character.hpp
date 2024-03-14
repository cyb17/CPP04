/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:44:40 by yachen            #+#    #+#             */
/*   Updated: 2024/03/14 16:04:00 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "interfaces/ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		const std::string		name;
		MateriaSource*			MateriaSource;

	public:

		Character( std::string nm );
		Character( const Character& other );
		Character&	operator = ( const Character& other );
		~Character();

		std::string const&	getName() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
};

#endif