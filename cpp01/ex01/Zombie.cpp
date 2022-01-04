/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:54:52 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/23 23:18:25 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("default")
{
	
}

Zombie::Zombie(std::string name) : _name(name)
{

}

void Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string& n)
{
	this->_name = n;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " Appel destructor" << std::endl;
	return ;
}
