/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:24:41 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 17:26:28 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice& from);
		Ice&	operator=(const Ice& from);
		Ice*	clone(void) const;
		void	use(ICharacter& target);
};