/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:24:01 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/27 19:22:10 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

void	test2(const Animal& animal)
{
	std::cout << animal.getType() << "\n";
	animal.makeSound();
}

void test(void)
{
	const Animal meta;
	const Dog dog;
	const Cat cat;
	
	test2(meta);
	test2(dog);
	test2(cat);
}

void	wtest2(const WrongAnimal& wanimal)
{
	std::cout << wanimal.getType() << "\n";
	wanimal.makeSound();
}

void	wtest(void)
{
	const WrongAnimal wmeta;
	const WrongCat wcat;

	wtest2(wmeta);
	wtest2(wcat);
}

int	main(void)
{
	test();
	wtest();

	return (0);
}