/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:31:53 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/27 18:58:58 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void):
	WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << "\n";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << "\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaou" << "\n";
}