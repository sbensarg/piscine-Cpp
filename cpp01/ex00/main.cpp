/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:54:48 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/19 20:24:25 by chicky           ###   ########.fr       */
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