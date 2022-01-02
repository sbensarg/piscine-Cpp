/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:24:36 by chicky            #+#    #+#             */
/*   Updated: 2022/01/02 18:56:59 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap(void); //canonical
	DiamondTrap(std::string n);
	DiamondTrap(DiamondTrap const & src); // Canonical
	~DiamondTrap(); // Canonical
	DiamondTrap & operator=(DiamondTrap const & rhs); // Canonical
	void attack(std::string const & target);
	void whoAmI();
	
};

#endif