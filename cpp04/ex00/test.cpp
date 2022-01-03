/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:25:24 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/03 16:32:54 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class WrongAnimal
{
	public:
		void makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
	public:
		void makeSound(void) const;
};

void WrongAnimal::makeSound(void) const
{
	std::cout << "Animal sound!!" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Cat sound (meow)!!" << std::endl;
}

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	i->makeSound(); //will output the wrong Animal sound!
	meta->makeSound();
}
