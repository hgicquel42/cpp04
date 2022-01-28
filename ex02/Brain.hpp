/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:37:31 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 11:46:05 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain& from);
		Brain&	operator=(const Brain& from);
};