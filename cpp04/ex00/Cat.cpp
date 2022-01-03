/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:40:05 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/03 16:55:31 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	Animal::_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & src)
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