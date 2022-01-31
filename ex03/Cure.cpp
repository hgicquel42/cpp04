/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:26:51 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/31 13:56:52 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void):
	AMateria("cure")
{}

Cure::~Cure(void)
{}

Cure::Cure(const Cure& from):
	AMateria(from)
{}

Cure&	Cure::operator=(const Cure& from)
{
	this->AMateria::operator=(from);
	return (*this);
}

Cure*	Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* " << "heals" << " ";
	std::cout << target.getName() << "'s ";
	std::cout << "wounds" << " *" << "\n";
}