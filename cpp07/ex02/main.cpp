/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:40:06 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/10 11:58:02 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {
	std::cout << "------Simple test------" << std::endl;
    Array<int> a(3);
	a[0] = 43;
	a[1] = -1;
	a[2] = 5;
	int ret = a.size();
	std::cout << "size: "<< ret << std::endl;
	std::cout << "a[1]: " << a[1] << std::endl;
	std::cout << "------test 2------" << std::endl;
	int * b = new int();
	std::cout << *b << std::endl;
	
	std::cout << "------- test with index out of bounds------" << std::endl;
	try
	{
    	Array<char> b(3);
		b[0] = 'a';
		b[1] = 'b';
		b[2] = 'c';
		std::cout << b[-2] << std::endl;
	}
	catch(std::exception e)
	{
		std::cout << "index is out of bounds!!" << std::endl;	
	}
	std::cout << "------copy constructor------" << std::endl;
	Array<int> c(a);
	for (unsigned int i = 0; i < c.size(); i++)
	{
		std::cout << "c["<<i<<"]= " << c[i] << " ";
	}
	
    return 0;
}