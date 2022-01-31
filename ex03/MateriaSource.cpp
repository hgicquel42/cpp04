/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:18:43 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/31 13:58:08 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete this->slots[i];
}

MateriaSource::MateriaSource(const MateriaSource& from)
{
	for (int i = 0; i < 4; i++)
	{
		if (from.slots[i])
			this->slots[i] = from.slots[i]->clone();
		else
			this->slots[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& from)
{
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

void	MateriaSource::learnMateria(AMateria* m)
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

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	int	i;

	for (i = 0; i < 4; i++)
		if (this->slots[i] && this->slots[i]->getType() == type)
			return (this->slots[i]->clone());
	return (NULL);
}