/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:54:21 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 16:30:42 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <string>

class AMateria
{
	protected:
		AMateria(const std::string& type);
		AMateria(const AMateria& from);
	public:
		~AMateria(void);
		const std::string& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};