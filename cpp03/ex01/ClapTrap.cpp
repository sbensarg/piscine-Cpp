/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:38:16 by chicky            #+#    #+#             */
/*   Updated: 2021/12/31 17:06:28 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap constructor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _name(Name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name <<" has been created !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed !" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	
	(void)rhs;
		
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << RED "ClapTrap " << YEL << this->_name << RESET 
	<< RED " attack " << YEL << target << RESET 
	<< RED " , causing " << YEL << this->_attack_damage << RESET << RED " points of damage!" RESET<< std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	this->_attack_damage = amount;
	this->_hitpoints -= this->_attack_damage;
	this->_energy_points -= this->_attack_damage;
	if (this->_energy_points >= 0)
	{
		std::cout << MAG "ClapTrap " << YEL << this->_name << RESET << MAG 
		<< " was attacked and receive "<< YEL << this->_attack_damage << RESET << MAG " points of damage"
		<< ", Points of energy left " <<  YEL << this->_energy_points << RESET << std::endl;	
	}
	else
		std::cout << BLU "ClapTrap " << YEL << this->_name << RESET << BLU << " already dead !!!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	
	this->_hitpoints += amount;
	this->_energy_points += this->_hitpoints;
	std::cout << GRN "ClapTrap "<< YEL << this->_name << RESET 
	<< GRN " was repaired for "<< YEL << amount << RESET 
	<< GRN " which makes total of hit points is " << YEL << this->_hitpoints 
	<< GRN << " !" RESET<< std::endl;
}