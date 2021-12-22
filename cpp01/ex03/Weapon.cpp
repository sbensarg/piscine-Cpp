/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:36:27 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/22 16:40:07 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
	this->_type = t;
}

Weapon::Weapon()
{

}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void) const
{
	return this->_type;
}

void Weapon::setType(const std::string & t)
{
	this->_type = t;
}