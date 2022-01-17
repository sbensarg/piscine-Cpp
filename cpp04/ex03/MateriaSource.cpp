/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:48:00 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/17 22:04:56 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	
}

MateriaSource::MateriaSource(MateriaSource const & src) 
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	if (this->a != NULL)
	{
		for(int i = 0; i < 4; i++)
			delete this->a[i];
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this->a != NULL)
	{
		for(int i = 0; i < 4; i++)
			delete this->a[i];
	}
	else
	{
		for(int i = 0; i < 4; i++)
			this->a[i] = rhs.a[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->a[i] == NULL)
		{
			a[i] = m->clone();
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->a[i]->getType() == type)
			return (a[i]->clone());
	}
	return (0);
}