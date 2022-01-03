/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:46:03 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/03 16:49:26 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_AMINAL_H
#define WRONG_AMINAL_H

#include <iostream>

class WrongAnimal
{
private:
	/* data */
public:

	WrongAnimal(void); // Canonical
	WrongAnimal(WrongAnimal const & src); // Canonical
	virtual ~WrongAnimal(); // Canonical
	WrongAnimal & operator=(WrongAnimal const & rhs); // Canonical
	void makeSound(void) const;
};

#endif