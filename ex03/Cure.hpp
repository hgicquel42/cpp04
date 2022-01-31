/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:24:41 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/31 13:55:08 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		Cure(const Cure& from);
		Cure&	operator=(const Cure& from);
		Cure*	clone(void) const;
		void	use(ICharacter& target);
};