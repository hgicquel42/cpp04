/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:19:26 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/27 18:51:29 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void):
	type("Animal")
{
	std::cout << "Animal default constructor called" << "\n";
}

Animal::Animal(std::string type):
	type(type)
{
	std::cout << "Animal second constructor called" << "\n";
}

Animal::Animal(const Animal& from):
	type(from.type)
{
	std::cout << "Animal copy constructor called" << "\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << "\n";
}

Animal&	Animal::operator=(const Animal& from)
{
	this->type = from.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "..." << "\n";
}

std::string	Animal::getType(void) const
{
	return (this->type);
}