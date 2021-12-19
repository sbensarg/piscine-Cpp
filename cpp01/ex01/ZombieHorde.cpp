/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 03:14:39 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/19 20:08:56 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	Zombie* arr = new Zombie[N];
	for (int i = 0 ; i != N ; i++)
	{
    	arr[i] = Zombie(name);
	}
	return (arr);
}