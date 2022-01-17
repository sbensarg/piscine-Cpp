/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:06:03 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/15 19:33:02 by chicky           ###   ########.fr       */
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
	(void)rhs;

	return (*this);
}