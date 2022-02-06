/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:40:06 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/06 21:26:25 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	std::cout << "------Simple test------" << std::endl;
    int arr[5] = {1, 2, 3, 4, 5};
    Array<int> a(arr, 5);
	int ret = a.size();
	std::cout << ret << std::endl;
	std::cout << arr[1] << std::endl;
	std::cout << "------test 2------" << std::endl;
	int * b = new int();
	std::cout << *b << std::endl;
	std::cout << "------- test with index out of bounds------" << std::endl;
	try
	{
		char tab[5] = {'a', 'b', 'c', 'e', 'f'};
    	Array<char> b(tab, 5);
		std::cout << b[7] << std::endl;
	}
	catch(std::exception e)
	{
		std::cout << "index is out of bounds!!" << std::endl;	
	}
	std::cout << "------copy const------" << std::endl;
	Array<int> c(a);
	for (unsigned int i = 0; i < c.size(); i++)
	{
		std::cout << c[i] << " ";
	}
	
    return 0;
}