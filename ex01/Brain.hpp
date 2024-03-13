/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:19:39 by yachen            #+#    #+#             */
/*   Updated: 2024/03/13 15:57:13 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain
{
	private:
		std::string	ideas[100];

	public:

		Brain();
		~Brain();
		Brain( const Brain& other );
		Brain&	operator = ( const Brain& other );

		void	fullIdeasTab();
		void	listTenIdeas() const;
};

#endif