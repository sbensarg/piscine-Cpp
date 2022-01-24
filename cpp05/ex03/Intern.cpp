/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:51:58 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/24 22:54:22 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void) rhs;
	return (*this);
}

Form *Intern::instpres(std::string name)
{
	return new PresidentialPardonForm(name);
}

Form *Intern::instshrb(std::string name)
{
	return new ShrubberyCreationForm(name);
}

Form *Intern::instrbt(std::string name)
{
	return new RobotomyRequestForm(name);
}

int	Intern::findform(std::string input)
{
	std::string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (tab[i] == input)
			return (i);
	}
	return(-1);
}

Form *Intern::makeForm(std::string name_form, std::string target)
{
	int ret;
	ret = Intern::findform(name_form);
	Form* (Intern::* ptfptr[3]) (std::string) = {&Intern::instshrb, &Intern::instrbt, &Intern::instpres};
	
	if (ptfptr[ret])
	{
		std::cout << "Intern creates " << name_form << " with a target " << target << std::endl;
		return (this->*ptfptr[ret])(target);
	}
	else
		std::cout << "requested form "<< name_form << " is not known " << std::endl;
	return (NULL);
}