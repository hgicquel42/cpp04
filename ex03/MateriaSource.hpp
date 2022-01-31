/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:20:31 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/31 12:22:58 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	slots[4];
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource& from);
		MateriaSource&	operator=(const MateriaSource& from);
		void learnMateria(AMateria* m);
		AMateria* createMateria(const std::string& type);
};