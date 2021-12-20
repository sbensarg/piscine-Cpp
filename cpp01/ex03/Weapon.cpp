/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:36:27 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/20 22:47:38 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


const std::string& Weapon::getType(void)
{
	return this->_type;
}

void Weapon::setType(std::string t)
{
	this->_type = t;
}