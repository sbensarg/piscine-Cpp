/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:30:34 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/01 12:14:25 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("default")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs._type;		
	return (*this);
}
void Animal::makeSound(void) const
{
	std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}