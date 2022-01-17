/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 22:52:24 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/17 21:58:41 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include <iostream>
#include "AMateria.hpp"
class AMateria;
class Ice : public AMateria
{
private:
	/* data */
public:
	Ice(void); // Canonical
	Ice(Ice const & src); // Canonical
	virtual ~Ice(); // Canonical
	Ice & operator=(Ice const & rhs); // Canonical
	AMateria* clone() const;
	void use(ICharacter& target);
};




#endif