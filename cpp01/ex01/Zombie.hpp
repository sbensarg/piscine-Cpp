/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:56:30 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/19 05:44:22 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);
	Zombie* zombieHorde( int N, std::string name );
};


#endif