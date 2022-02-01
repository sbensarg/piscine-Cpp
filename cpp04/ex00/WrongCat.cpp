/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:42:50 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/01 12:25:54 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{

}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	WrongAnimal::operator=(rhs);
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Cat sound (meow)!!" << std::endl;
}