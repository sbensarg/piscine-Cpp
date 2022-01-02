/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:47:28 by chicky            #+#    #+#             */
/*   Updated: 2022/01/02 17:54:56 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCEVTRAP_H
#define SCEVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(void); //canonical
	ScavTrap(std::string n);
	ScavTrap(ScavTrap const & src); //canonical
	~ScavTrap(); //canonical
	ScavTrap & operator=(ScavTrap const & rhs); // Canonical
	void attack(std::string const & target);
	void guardGate(void);
};


#endif