/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:19:26 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/27 19:02:54 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void):
	type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << "\n";
}

WrongAnimal::WrongAnimal(std::string type):
	type(type)
{
	std::cout << "WrongAnimal second constructor called" << "\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& from):
	type(from.type)
{
	std::cout << "WrongAnimal copy constructor called" << "\n";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << "\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& from)
{
	this->type = from.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WRONG" << "\n";
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}