/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:30:34 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/15 19:04:23 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("default")
{
	std::cout << RED "Animal constructor called" RESET << std::endl;
}

Animal::Animal(Animal const & src)
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << RED "Animal destructor called" RESET << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	//(void)rhs;
	this->_type = rhs.getType();
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << RED "Animal sound!" RESET << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}