/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:29:43 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 16:33:10 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat& from);
		Cat&	operator=(const Cat& from);
		void	makeSound(void) const;
};