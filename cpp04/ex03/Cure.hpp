/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:01:26 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/17 20:24:21 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include <iostream>
#include "AMateria.hpp"
class AMateria;
class Cure : public AMateria
{
private:
	/* data */
public:
	Cure(void); // Canonical
	Cure(Cure const & src); // Canonical
	virtual ~Cure(); // Canonical
	Cure & operator=(Cure const & rhs); // Canonical
	AMateria* clone() const;
	void use(ICharacter& target);
};




#endif