/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:26:16 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/19 00:37:13 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "-------test 1: Attempting to create a Bureaucrat with an invalid grade ------" << std::endl;
	try
	{
		Bureaucrat b("b1", 151);
		std::cout << b << std::endl;
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
	
	std::cout << "-------test 2: the grade gets too high ------" << std::endl;
	try
	{
		Bureaucrat b("b1", 1);
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
		b.inc_grade();
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;

	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
	std::cout << "-------test 3: the grade gets too low ------" << std::endl;
	try
	{
		Bureaucrat b("b1", 150);
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
		b.dec_grade();
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}

	std::cout << "-------test 4: correct creation of Bureaucrat  ------" << std::endl;
	try
	{
		Bureaucrat b("b1", 2);
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
		b.inc_grade();
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
		b.dec_grade();
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
}
