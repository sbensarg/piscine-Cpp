/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:38:22 by chicky            #+#    #+#             */
/*   Updated: 2022/01/02 18:43:18 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap dt("chicky");

	dt.attack("otter");
	dt.takeDamage(15);
	dt.beRepaired(7);
	dt.highFivesGuys();
	dt.whoAmI();

	return (0);
}