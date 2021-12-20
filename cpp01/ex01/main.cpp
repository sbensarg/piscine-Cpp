/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:54:48 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/20 22:16:14 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int main(void)
{
	Zombie *ret;
		
	ret = zombieHorde(2, "sara");
	
	for (int i = 0 ; i != 2 ; i++)
	{
    	ret[i].announce();
	}
	delete [] ret;
};