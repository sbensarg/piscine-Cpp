/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 16:44:47 by chicky            #+#    #+#             */
/*   Updated: 2022/01/02 17:03:09 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap constructor called !" << std::endl;
}

FragTrap::FragTrap(std::string n)
{
	this->_name = n;
	this->_energy_points = 100;
	this->_hitpoints = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap " << this->_name <<" has been created !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has been destroyed !" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;

	(void)rhs;

	return (*this);
}

void FragTrap::attack(std::string const & target)
{
	std::cout << RED "FragTrap " << YEL << this->_name << RESET 
	<< RED " attack " << YEL << target << RESET 
	<< RED " , causing " << YEL << this->_attack_damage << RESET << RED " points of damage!" RESET<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << CYN "positive high fives request!" RESET << std::endl;
}

