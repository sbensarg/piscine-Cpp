/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:54:48 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/19 20:38:44 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int main(void)
{
	Zombie *ret;
	Zombie arr;
		
	ret = arr.zombieHorde(4, "sara");
	
	for (int i = 0 ; i != 4 ; i++)
	{
    	ret[i].announce();
	}
	delete []ret;
};