/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:20:14 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/20 19:28:46 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str; 
	std::string& stringREF = str; //Reference sur str  
	
	std::cout << &str << " , " << stringPTR << " , " << &stringREF << std::endl;
	
	std::cout << str << " , " << *stringPTR << " , " << stringREF << std::endl; 
	
	return (0);
}