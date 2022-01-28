/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:31:53 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 13:11:30 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void):
	Animal("Cat"),
	brain(new Brain())
{
	std::cout << "Cat default constructor called" << "\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << "\n";
	delete this->brain;
}

Cat::Cat(const Cat& from):
	Animal(from)
{
	if (from.brain)
		this->brain = new Brain(*from.brain);
	else
		this->brain = NULL;
}

Cat&	Cat::operator=(const Cat& from)
{
	this->Animal::operator=(from);
	
	if (from.brain)
		this->brain = new Brain(*from.brain);
	else
		this->brain = NULL;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << "\n";
}