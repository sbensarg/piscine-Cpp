/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:38:22 by chicky            #+#    #+#             */
/*   Updated: 2022/02/01 14:31:49 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// int main()
// {
// 	DiamondTrap dt("chicky");

// 	dt.attack("otter");
// 	dt.takeDamage(15);
// 	dt.beRepaired(7);
// 	dt.highFivesGuys();
// 	dt.whoAmI();

// 	return (0);
// }

int main()
{
	//test copy constructor 
    DiamondTrap first("chicky");
	std::cout << "-------" << std::endl;
    DiamondTrap cp(first);

    cp.whoAmI();
}