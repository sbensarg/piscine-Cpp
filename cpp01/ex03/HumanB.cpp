/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:53:28 by chicky            #+#    #+#             */
/*   Updated: 2021/12/23 05:37:30 by sbensarg         ###   ########.fr       */
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

void HumanB::attack()
{
	std::cout << this->_name << " attacks with his " <<  this->_weapon->getType() << std::endl;
}