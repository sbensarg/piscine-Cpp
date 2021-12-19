/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:54:48 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/19 04:34:37 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
int main(void)
{
	Zombie zombie;
	Zombie *del;
		
	del = zombie.newZombie("heap");
	zombie.randomChump("stack");
	delete del;
};