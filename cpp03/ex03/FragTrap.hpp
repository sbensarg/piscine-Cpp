/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 16:44:51 by chicky            #+#    #+#             */
/*   Updated: 2022/01/02 17:54:40 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	/* data */
public:
	FragTrap(void); //canonical
	FragTrap(std::string n);
	FragTrap(FragTrap const & src); //canonical
	~FragTrap(); //canonical
	FragTrap & operator=(FragTrap const & rhs); // Canonical
	void attack(std::string const & target);
	void highFivesGuys(void);
};

#endif