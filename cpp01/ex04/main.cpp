/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:24:22 by chicky            #+#    #+#             */
/*   Updated: 2021/12/22 19:51:04 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string.h>

void replace(std::string filename, std::string s1,  std::string s2)
{
	std::string line;
	std::ifstream inputFile(filename);
	std::ofstream outFile(filename + ".replace");
	
	if (inputFile.is_open())  
  	{  
		//    std::string line;
    	// 	size_t len = s1.length();
		// while (getline (inputFile, line))
		// {
		// 	size_t pos = line.find(s1);
		// 	if (pos != std::string::npos)
		// 	{
		// 		line.replace(pos, len, s2);
		// 	}
		// 	outFile << line;		
		// }
		while (getline (inputFile, line))
		{
			for(size_t pos = 0; ; pos += s2.length()) 
			{
				// Locate the substring to replace
				pos = line.find(s1, pos);
				if( pos == std::string::npos)
					break;
				// Replace by erasing and inserting
				line.erase(pos, s1.length());
				line.insert(pos,s2);
			}
			outFile << line;
		}
    	inputFile.close();  
  	}  
  	else
	   std::cout <<"File opening is fail.";  
}

int main()
{
	std::string s1 = "name";
	std::string s2 = "sara bensarghin";
	
	replace("test", s1, s2);
}