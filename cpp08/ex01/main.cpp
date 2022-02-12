/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:49:06 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/12 15:15:52 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	std::srand ( unsigned ( std::time(0) ) );
	Span sp = Span(5);
	try
	{
		sp.addRange();
		for (Span::iterator it = sp.begin(); it!=sp.end(); ++it)
		{
			std::cout << " "<<  *it << std::endl;
		}
		std::cout << '\n';
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
	 	std::cout << "longestSpan: " << sp.longestSpan() << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
	return 0;
}