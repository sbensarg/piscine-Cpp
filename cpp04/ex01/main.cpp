/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:29:00 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/15 20:19:48 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "/** Simple test" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	std::cout << "**/" << std::endl;
	
	std::cout << "/** copy constructor test" << std::endl;
	Dog basic;
	std::cout << "----------------------" << std::endl;
	{
		Dog tmp = basic;
		std::cout << "----------------------" << std::endl;
	}
	std::cout << "----------------------" << std::endl;
	std::cout << "**/" << std::endl;
	
	std::cout << "/** test Array of Animal" << std::endl;
	Animal *a[4];
	for(int i = 0; i < 4 ; i++)
	{
		if (i % 2 == 0)
			a[i] = new Dog();
		else
			a[i] = new Cat();
	}
	std::cout << "--------makeSound---------" << std::endl;
	for(int i = 0; i < 4 ; i++)
	{
		a[i]->makeSound();
	}
	std::cout << "--------delete---------" << std::endl;
	for(int i = 0; i < 4 ; i++)
	{
		delete a[i];
	}
	std::cout << "**/" << std::endl;
	
	return (0);
}