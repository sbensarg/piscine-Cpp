/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 23:59:50 by chicky            #+#    #+#             */
/*   Updated: 2021/12/29 11:01:20 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main( void )
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << "-----" << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "-----" << std::endl;
	std::cout << a << std::endl;
	std::cout << "-----" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "-----" << std::endl;
	std::cout << a << std::endl;
	std::cout << "-----" << std::endl;
	std::cout << b << std::endl;
	std::cout << "-----" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	
	return 0;
}