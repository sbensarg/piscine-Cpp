/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 22:52:55 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/17 22:11:33 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	//this->type = "cure";
}


Cure::Cure(Cure const & src) : AMateria(src)
{

}

Cure::~Cure()
{
	
}

Cure & Cure::operator=(Cure const & rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " <<  target << "'s wounds *" << std::endl;
}
