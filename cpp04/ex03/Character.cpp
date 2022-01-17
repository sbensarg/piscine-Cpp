/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:45:18 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/17 21:31:07 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	for(int i = 0; i < 4; i++)
		this->a[i] = NULL;
	
}

Character::Character(std::string name) : _name(name)
{
	for(int i = 0; i < 4; i++)
		this->a[i] = NULL;
}

Character::Character(Character  const & src)
{
	*this = src;
}

Character::~Character()
{
	if (this->a != NULL)
	{
		for(int i = 0; i < 4; i++)
			delete this->a[i];
	}
}

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
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

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->a[i] == NULL)
		{
			a[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		a[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		(this->a[idx])->use(target);
}

