/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:42:54 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/03 16:48:50 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	/* data */
public:
	WrongCat(void); // Canonical
	WrongCat(WrongCat const & src); // Canonical
	virtual ~WrongCat(); // Canonical
	WrongCat & operator=(WrongCat const & rhs); // Canonical
	void makeSound(void) const;
};

#endif