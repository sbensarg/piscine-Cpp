/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:21:14 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/02 15:57:04 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	
}

AMateria::AMateria(std::string const & type) : type(type)
{
	
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria::~AMateria()
{
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* use " <<  target << "'s Amateria *" << std::endl;
}

std::ostream & operator<<(std::ostream & o, ICharacter const & rhs)
{
	o << rhs.getName();
	return (o);
}
