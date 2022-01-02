/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:38:19 by chicky            #+#    #+#             */
/*   Updated: 2021/12/31 16:57:23 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

class ClapTrap
{
protected:
	std::string _name;
	int _hitpoints;
	int _energy_points;
	int _attack_damage; 
public:
	ClapTrap(void); // Canonical
	ClapTrap(std::string Name);
	ClapTrap(ClapTrap const & src); // Canonical
	~ClapTrap(); // Canonical
	ClapTrap & operator=(ClapTrap const & rhs); // Canonical
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif