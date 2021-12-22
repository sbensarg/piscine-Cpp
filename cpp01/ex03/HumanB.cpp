/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:53:28 by chicky            #+#    #+#             */
/*   Updated: 2021/12/22 16:44:55 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
	this->_name = n;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon & w)
{
	this->_weapon = &w;
}

Weapon const * HumanB::getWeapon(void) const
{
	return this->_weapon;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << getWeapon()->getType() << std::endl;
}