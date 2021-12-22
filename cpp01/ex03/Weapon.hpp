/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:35:04 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/22 16:39:44 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string t);
	~Weapon();
	const std::string& getType(void) const;
	void setType(const std::string& t);
};


#endif