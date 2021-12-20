/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:54:52 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/20 22:14:22 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int i = 0;
Zombie::Zombie() : _name("default")
{
	
}

Zombie::Zombie(std::string name) : _name(name)
{

}

void Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	i = 1;
}

// Zombie Zombie::setName(std::string& n)
// {
// 	this->_name = n;
// 	return (this->_name);
// }

Zombie::~Zombie()
{
	if (i == 1)
		std::cout << "Zombie " << this->_name << " Appel destructor" << std::endl;
	return ;
}
