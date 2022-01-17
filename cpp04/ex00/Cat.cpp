/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:40:05 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/14 19:12:37 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	Animal::_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	(void)rhs;
		
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Cat sound (meow)!!" << std::endl;
}

std::string Cat::getType(void) const
{
	return this->_type;
}