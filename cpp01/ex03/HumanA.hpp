/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:06:18 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/23 05:37:42 by sbensarg         ###   ########.fr       */
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
};





#endif