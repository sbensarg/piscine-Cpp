/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:06:18 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/22 16:18:06 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon  & _weapon;
public:
	HumanA(std::string n, Weapon & w);
	~HumanA();
	void attack();
	Weapon const & getWeapon(void) const;
};





#endif