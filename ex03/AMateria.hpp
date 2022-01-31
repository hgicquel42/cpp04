/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:54:21 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/31 14:13:45 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class AMateria;

#include "ICharacter.hpp"
#include <string>

class AMateria
{
	private:
		std::string	type;
	protected:
		AMateria(const std::string& type);
		AMateria(const AMateria& from);
	public:
		virtual ~AMateria(void);
		AMateria&	operator=(const AMateria& from);
		const std::string& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};