/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:38:27 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/15 20:44:47 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	Animal::_type = "Dog";
	std::cout << MAG "Dog constructor called" RESET << std::endl;
	this->attr_d = new Brain();
}


Dog::Dog(Dog const & src) : Animal(src)
{
	this->attr_d = new Brain();
	*this = src;
	std::cout <<  MAG "Dog copy constructor called" RESET << std::endl;
}

Dog::~Dog()
{
	if (this->attr_d)
		delete this->attr_d;
	std::cout <<  MAG "Dog destructor called" RESET << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	(void)rhs;	
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << MAG "Dog sound (haw haw)!!" RESET << std::endl;
}

std::string Dog::getType(void) const
{
	return this->_type;
}

void  Dog::setBrain(Brain *b)
{
	this->attr_d = b;
}
Brain *Dog::getBrain(void) const
{
	return this->attr_d;
}