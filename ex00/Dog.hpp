/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:29:43 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 16:34:22 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog& from);
		Dog&	operator=(const Dog& from);
		void	makeSound(void) const;
};