/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:27:33 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/15 15:20:05 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
int main()
{
	/*test with MutantStack */
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top :" << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout <<  "size :" << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
	std::cout << "stack values: "<< *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	/* test with  std::list */
	std::cout << " ---------------------- " << std::endl;
	std::list<int> list;
	
	list.push_back(5);
	list.push_back(17);
	
	std::cout << "top :" << list.back() << std::endl;
	
	list.pop_back();
	
	std::cout <<  "size :" << list.size() << std::endl;
	
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);
	
	std::list<int>::iterator itl = list.begin();
	std::list<int>::iterator itel = list.end();
	
	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << "list values: "<< *itl << std::endl;
		++itl;
	}
	return 0;
}