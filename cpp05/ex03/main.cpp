/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:26:16 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/24 23:12:36 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat b("b1", 42);
		std::cout << b << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(b);
		rrf->execute(b);
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
}