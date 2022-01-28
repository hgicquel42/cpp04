/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:31:53 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 16:36:36 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void):
	Animal("Cat")
{
	std::cout << "Cat default constructor called" << "\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << "\n";
}

Cat::Cat(const Cat& from):
	Animal(from)
{}

Cat&	Cat::operator=(const Cat& from)
{
	this->Animal::operator=(from);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << "\n";
}