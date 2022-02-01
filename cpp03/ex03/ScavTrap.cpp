/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:47:24 by chicky            #+#    #+#             */
/*   Updated: 2022/02/01 13:30:45 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_energy_points = 50;
	this->_hitpoints = 100;
	this->_attack_damage = 20;
	std::cout << "ScavTrap constructor called !" << std::endl;
}

ScavTrap::ScavTrap(std::string n)
{
	this->_name = n;
	this->_energy_points = 50;
	this->_hitpoints = 100;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name <<" has been created !" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed !" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	ClapTrap::operator=(rhs);
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << RED "ScavTrap " << YEL << this->_name << RESET 
	<< RED " attack " << YEL << target << RESET 
	<< RED " , causing " << YEL << this->_attack_damage << RESET << RED " points of damage!" RESET<< std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << CYN "ScavTrap have enterred in Gate keeper mode!" RESET << std::endl;
}
