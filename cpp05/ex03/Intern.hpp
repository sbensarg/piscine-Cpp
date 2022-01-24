/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:53:39 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/23 18:53:39 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern(void);
	Intern(Intern const & src);
	~Intern();
	Intern & operator=(Intern const & rhs);
	Form *instpres(std::string name);
	Form *instrbt(std::string name);
	Form *instshrb(std::string name);
	int	findform(std::string input);
	Form *makeForm(std::string name_form, std::string target);
};


#endif