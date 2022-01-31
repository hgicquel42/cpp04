/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:28:17 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/31 13:57:40 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name):
	name(name)
{
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

Character::Character(const Character& from):
	name(from.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (from.slots[i])
			this->slots[i] = from.slots[i]->clone();
		else
			this->slots[i] = NULL;
	}
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete this->slots[i];
}

Character&	Character::operator=(const Character& from)
{
	this->name = from.name;
	for (int i = 0; i < 4; i++)
		delete this->slots[i];
	for (int i = 0; i < 4; i++)
	{
		if (from.slots[i])
			this->slots[i] = from.slots[i]->clone();
		else
			this->slots[i] = NULL;
	}
	return (*this);
}

const std::string&	Character::getName(void) const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->slots[i])
		{
			this->slots[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->slots[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (!this->slots[idx])
		return ;
	this->slots[idx]->use(target);
}
