/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:40:05 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/01 12:53:48 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	Animal::_type = "Cat";
	std::cout << YEL "Cat constructor called" RESET << std::endl;

	this->attr_c = new Brain();
}

Cat::Cat(Cat const & src) : Animal(src)
{
	this->attr_c = new Brain();
	std::cout <<  YEL "Cat copy constructor called" RESET << std::endl;
}

Cat::~Cat()
{
	if (this->attr_c)
		delete this->attr_c;
	std::cout << YEL "Cat destructor called" RESET << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	Animal::operator=(rhs);
	this->attr_c = rhs.attr_c;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << YEL "Cat sound (meow)!!" RESET << std::endl;
}

std::string Cat::getType(void) const
{
	return this->_type;
}