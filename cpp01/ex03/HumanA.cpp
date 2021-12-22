/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:53:32 by chicky            #+#    #+#             */
/*   Updated: 2021/12/22 16:14:19 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon & w) : _name(n), _weapon(w)
{
	
}

HumanA::~HumanA()
{
	
}

Weapon const & HumanA::getWeapon(void) const
{
	return this->_weapon;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << getWeapon().getType() << std::endl;
}