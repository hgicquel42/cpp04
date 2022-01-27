/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:24:01 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/27 18:47:38 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	const Animal meta;
	const Dog dog;
	const Cat cat;

	std::cout << meta.getType() << "\n";
	meta.makeSound();

	std::cout << dog.getType() << "\n"; 
	dog.makeSound();

	std::cout << cat.getType() << "\n";
	cat.makeSound();

	return 0;
}