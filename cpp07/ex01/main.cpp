/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:10:28 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/06 17:23:14 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T >
void echo(T const & a)
{
	std::cout << "hi, your value is " << a << std::endl;
}
int main()
{
	int arr[] = {0, 1, 2, 3, 4};
	
	iter(arr, 5, echo);
	std::cout << "----------------------------" << std::endl;
	const char *tab[] = {"a", "b", "c", "d", "e"};
	
	iter(tab, 5, echo);
}