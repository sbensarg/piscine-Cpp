/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:30:34 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/01 20:11:58 by sbensarg         ###   ########.fr       */
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
	this->_type = rhs._type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return this->_type;
}