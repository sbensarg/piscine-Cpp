/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:25:23 by chicky            #+#    #+#             */
/*   Updated: 2022/01/02 22:36:23 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap constructor called !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string n)
{
	this->_name = n;
	ClapTrap::_name = n + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap " << this->_name <<" has been created !" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " has been destroyed !" << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	(void)rhs;

	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << MAG "DiamondTrap name: " << YEL << this->_name << RESET << MAG ", ClapTrap name: " << YEL << ClapTrap::_name << RESET << std::endl;
}