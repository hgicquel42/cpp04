/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:39:12 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 12:01:54 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << "\n";
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << "\n";
}

Brain::Brain(const Brain& from)
{
	*this = from;
}

Brain&	Brain::operator=(const Brain& from)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = from.ideas[i];
	return (*this);
}
