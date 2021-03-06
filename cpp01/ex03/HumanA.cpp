/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:53:32 by chicky            #+#    #+#             */
/*   Updated: 2021/12/23 05:37:46 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon & w) : _name(n), _weapon(w)
{
	
}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " <<  this->_weapon.getType() << std::endl;
}