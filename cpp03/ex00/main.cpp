/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:38:22 by chicky            #+#    #+#             */
/*   Updated: 2021/12/31 17:00:16 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::string name1 = "sara";
	std::string name2 = "timon";
	ClapTrap ins1(name1);
	ClapTrap ins2(name2);
	
	ins1.attack(name2);
	ins1.takeDamage(3);
	ins2.takeDamage(2);
	ins2.beRepaired(1);
	ins1.attack(name2);
	ins2.attack(name1);
	ins2.beRepaired(2);
	ins2.takeDamage(11);
	ins1.takeDamage(2);
	ins2.takeDamage(6);

	return (0);		
}