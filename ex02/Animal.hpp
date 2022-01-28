/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:15:02 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 13:25:47 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal
{
	protected:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal& from);
		std::string	type;
	public:
		virtual ~Animal(void);
		Animal&	operator=(const Animal& from);
		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;
};