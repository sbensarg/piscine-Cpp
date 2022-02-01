/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:06:03 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/01 13:10:36 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << CYN "Brain constructor called" RESET << std::endl;
}

Brain::Brain(Brain const & src)
{
	
	*this = src;
}

Brain::~Brain()
{
	std::cout << CYN "Brain destructor called" RESET << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}