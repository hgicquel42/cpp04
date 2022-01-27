/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:31:53 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/27 18:53:09 by hgicquel         ###   ########.fr       */
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

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << "\n";
}