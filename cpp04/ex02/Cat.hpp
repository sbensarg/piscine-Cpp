/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:39:58 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/15 19:07:52 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
 
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *attr_c;
public:
	Cat(void); // Canonical
	Cat(Cat const & src); // Canonical
	virtual ~Cat(); // Canonical
	Cat & operator=(Cat const & rhs); // Canonical
	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif