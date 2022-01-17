/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:30:31 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/15 20:48:34 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define WHT   "\x1B[37m"
# define RESET "\x1B[0m"

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
	virtual void makeSound(void) const = 0; // methode pure 
};



#endif