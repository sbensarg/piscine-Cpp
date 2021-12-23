/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 00:20:39 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/23 17:48:48 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int	Karen::findLevel(std::string input)
{
	std::string s1 = "DEBUG";
	std::string s2 = "INFO";
	std::string s3 = "WARNING";
	std::string s4 = "ERROR";
	if (!input.compare(s1) || !input.compare(s2) || !input.compare(s3)  || !input.compare(s4))
	{
		std::map<std::string,int> mymap;
		std::map<std::string,int>::iterator it;
		mymap["DEBUG"] = 1;
		mymap["INFO"] = 2;
		mymap["WARNING"] = 3;
		mymap["ERROR"] = 4;
		it = mymap.find(input);
		if (it != mymap.end())
			return (it->second);
	}
	return(-1);
}
void Karen::complain( std::string level)
{
	switch (Karen::findLevel(level))
	{
	case 1:
		Karen::debug();
		Karen::info();
		Karen::warning();
		Karen::error();
		break;
	case 2:
		Karen::info();
		Karen::warning();
		Karen::error();
		break;
	case 3:
		Karen::warning();
		Karen::error();
		break;
	case 4:
		Karen::error();
		break;
	
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}