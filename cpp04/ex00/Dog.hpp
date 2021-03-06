/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:37:43 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/03 16:11:56 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream> 
#include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog(void); // Canonical
	Dog(Dog const & src); // Canonical
	virtual ~Dog(); // Canonical
	Dog & operator=(Dog const & rhs); // Canonical
	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif