/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:49:06 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/14 16:18:28 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

// function generator:
int RandomNumber () { return (std::rand()%100); }

int main()
{
	std::srand ( unsigned ( std::time(0) ) );
	Span sp = Span(9);
	std::vector<int> myvector (9);
	try
	{
		std::generate (myvector.begin(), myvector.end(), RandomNumber);
		sp.addRange(myvector.begin(), myvector.end());
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
