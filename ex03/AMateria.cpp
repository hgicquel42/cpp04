/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:44:44 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 17:33:58 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(const std::string& type):
	type(type)
{}

AMateria::~AMateria(void)
{}

AMateria::AMateria(const AMateria& from):
	type(from.type)
{}

AMateria&	AMateria::operator=(const AMateria& from)
{
	return (*this);
}

const std::string&	AMateria::getType(void) const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* " << "does nothing on" << " ";
	std::cout << target.getName() << " *" << "\n";
}