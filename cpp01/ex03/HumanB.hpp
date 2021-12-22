/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:06:21 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/22 16:42:31 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanB(std::string n);
	~HumanB();
	void setWeapon(Weapon & w);
	Weapon const * getWeapon(void) const;
	void attack();
};



#endif