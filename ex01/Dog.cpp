/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:31:53 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 13:11:22 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void):
	Animal("Dog"),
	brain(new Brain())
{
	std::cout << "Dog default constructor called" << "\n";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << "\n";
	delete this->brain;
}

Dog::Dog(const Dog& from):
	Animal(from)
{
	if (from.brain)
		this->brain = new Brain(*from.brain);
	else
		this->brain = NULL;
}

Dog&	Dog::operator=(const Dog& from)
{
	this->Animal::operator=(from);
	
	if (from.brain)
		this->brain = new Brain(*from.brain);
	else
		this->brain = NULL;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << "\n";
}