/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:24:01 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/28 11:59:52 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	Animal* animals[100];

	for(int i = 0; i < 50; i++)
		animals[i] = new Cat();
	for(int i = 50; i < 100; i++)
		animals[i] = new Dog();
	for(int i = 0; i < 100; i++)
		delete animals[i];
	return (0);
}