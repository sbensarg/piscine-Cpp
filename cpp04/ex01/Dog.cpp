/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:38:27 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/01 12:54:39 by sbensarg         ###   ########.fr       */
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
	Animal::operator=(rhs);
	this->attr_d = rhs.attr_d;
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