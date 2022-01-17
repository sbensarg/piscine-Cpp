/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:38:27 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/14 19:13:10 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	Animal::_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & src) :  Animal(src)
{
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	(void)rhs;
		
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Dog sound (haw haw)!!" << std::endl;
}

std::string Dog::getType(void) const
{
	return this->_type;
}