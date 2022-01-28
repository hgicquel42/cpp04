/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:34:28 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 17:37:38 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		AMateria*	slots[4];
	public:
		Character(const std::string& name);
		Character(const Character& from);
		~Character(void);
		Character&	operator=(const Character& from);
		const std::string&	getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};