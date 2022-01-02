/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:38:22 by chicky            #+#    #+#             */
/*   Updated: 2022/01/02 17:04:29 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap ft("chicky");

	ft.attack("otter");
	ft.takeDamage(15);
	ft.beRepaired(7);
	ft.highFivesGuys();

	return (0);
}