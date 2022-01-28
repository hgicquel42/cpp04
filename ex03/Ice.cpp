/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:26:51 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 17:31:27 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Ice.hpp"
#include <iostream>

Ice::Ice(void):
	AMateria("ice")
{}

Ice::~Ice(void)
{}

Ice::Ice(const Ice& from):
	AMateria(from)
{}

Ice&	Ice::operator=(const Ice& from)
{
	this->AMateria::operator=(from);
}

Ice*	Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* " << "shoots an ice bolt at" << " ";
	std::cout << target.getName() << " *" << "\n";
}