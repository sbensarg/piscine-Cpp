/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:48:00 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/02 16:11:17 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
		this->a[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) 
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->a[i])
			delete this->a[i];
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) 
{
	for(int i = 0; i < 4; i++)
	{
		if (this->a[i])
			delete this->a[i];
	}
	for(int i = 0; i < 4; i++)
		this->a[i] = rhs.a[i];
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
		if (this->a[i] != NULL && this->a[i]->getType() == type)
			return (a[i]->clone());
	}
	return (0);
}