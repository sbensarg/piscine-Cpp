/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 00:20:39 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/23 17:36:40 by sbensarg         ###   ########.fr       */
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

void Karen::complain( std::string level )
{
	std::map<std::string,void (Karen::*) (void)> mymap;
  	std::map<std::string,void (Karen::*) (void)>::iterator it;

	mymap["DEBUG"] = &Karen::debug;
	mymap["INFO"] = &Karen::info;
	mymap["WARNING"] = &Karen::warning;
	mymap["ERROR"] = &Karen::error;
	
	it = mymap.find(level);
	if (it != mymap.end())
		(this->*(it->second))();
}