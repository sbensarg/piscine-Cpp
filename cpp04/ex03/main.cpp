/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:22:20 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/02 16:53:30 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "MateriaSource.hpp"
 #include "Ice.hpp"
 #include "Cure.hpp"
 #include "Character.hpp"
 #include "IMateriaSource.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("chicky");
	
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	
	me->equip(tmp);
	
	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("materiatest");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}