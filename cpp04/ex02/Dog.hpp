/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:37:43 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/15 18:42:01 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream> 
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *attr_d;
public:
	Dog(void); // Canonical
	Dog(Dog const & src); // Canonical
	virtual ~Dog(); // Canonical
	Dog & operator=(Dog const & rhs); // Canonical
	std::string getType(void) const;
	virtual void makeSound(void) const;
	Brain *getBrain(void) const;
	void setBrain(Brain *b);
};

#endif