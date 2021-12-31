/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:38:22 by chicky            #+#    #+#             */
/*   Updated: 2021/12/31 17:00:51 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap sct("chicky");
	
	sct.attack("otter");
	sct.takeDamage(5);
	sct.beRepaired(3);
	sct.guardGate();

	return (0);
}