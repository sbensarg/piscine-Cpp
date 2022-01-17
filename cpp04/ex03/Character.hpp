/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:45:00 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/17 20:24:09 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria* a[4];
public:
	Character(void); // Canonical
	Character(std::string name);
	Character(Character  const & src); // Canonical
	virtual ~Character(); // Canonical
	Character & operator=(Character  const&  rhs);
	
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif