/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:47:48 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/17 01:07:52 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* a[4];
public:
	MateriaSource(void); // Canonical
	MateriaSource(MateriaSource const & src); // Canonical
	virtual ~MateriaSource(); // Canonical
	MateriaSource & operator=(MateriaSource const & rhs); // Canonical
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};


#endif