/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:38:27 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/01 12:24:59 by sbensarg         ###   ########.fr       */
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

}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	Animal::operator=(rhs);
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