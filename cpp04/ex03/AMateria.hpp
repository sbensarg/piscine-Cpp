/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:22:02 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/17 20:20:18 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_H
#define AMateria_H

#include <iostream>
#include "ICharacter.hpp" 
class ICharacter;
class AMateria
{
protected:
	std::string type;
public:
	AMateria(void); // Canonical
	AMateria(std::string const & type);
	AMateria(AMateria const & src); // Canonical
	virtual ~AMateria(); // Canonical
	AMateria & operator=(AMateria const & rhs); // Canonical
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
std::ostream & operator<<(std::ostream & o, ICharacter const & rhs);
#endif