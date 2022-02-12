/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:44:11 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/11 18:16:51 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
int main()
{
	/*test vector*/
    std::vector<int> vec;
	std::vector<int>::iterator it;
	vec.push_back(9);
	vec.push_back(21);
	vec.push_back(14);
	vec.push_back(10);
	vec.push_back(16);
	vec.push_back(31);
	try
	{
		it = easyfind(vec, 14);
		std::cout << "vector Element " << *it << " found!! " << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "vector: Element not found!!\n";
	}
	/*test list*/
	std::list<int> list;
	std::list<int>::iterator itl;
    list.push_back(21);
    list.push_back(22);
    list.push_back(24);
    list.push_back(25);
	try
	{
		itl = easyfind(list, 100);
		std::cout << "list Element " << *itl << " found!! " << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << "list: Element not found!!\n";
	}
	
	
	
}