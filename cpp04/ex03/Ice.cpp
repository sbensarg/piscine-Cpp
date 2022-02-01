/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 22:51:52 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/01 20:22:39 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{

}

Ice::Ice(Ice const & src) : AMateria(src)
{

}

Ice::~Ice()
{
	
}

Ice & Ice::operator=(Ice const & rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " <<  target << " *" << std::endl;
}
