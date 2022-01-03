/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:30:31 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/03 16:11:49 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
 #include <iostream>
class Animal
{
protected:
	std::string _type;
public:
	Animal(void); // Canonical
	Animal(Animal const & src); // Canonical
	virtual ~Animal(); // Canonical
	Animal & operator=(Animal const & rhs); // Canonical
	std::string getType(void) const;
	virtual void makeSound(void) const;
};



#endif