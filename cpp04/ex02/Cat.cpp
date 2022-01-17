/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:40:05 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/15 20:45:16 by chicky           ###   ########.fr       */
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
	*this = src;
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
	(void)rhs;
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