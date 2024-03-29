/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:31:53 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 16:36:30 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void):
	Animal("Dog")
{
	std::cout << "Dog default constructor called" << "\n";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << "\n";
}

Dog::Dog(const Dog& from):
	Animal(from)
{}

Dog&	Dog::operator=(const Dog& from)
{
	this->Animal::operator=(from);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << "\n";
}