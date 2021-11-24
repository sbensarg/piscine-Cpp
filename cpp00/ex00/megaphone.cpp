#include <iostream>
#include <string>

int main() //(int argc , char **argv)
{

	std::string s ="test test";
	unsigned long i = 0 ;
	while(i < s.length())
	{
		std::cout << (char)toupper(s[i]);
		i++;
	}

	// std::string low_string;
	// std::string up_string;
	// int i;
	// int j;

	// i = 1;
	// j = 0;

	// if(argc >= 2)
	// {
	// 	while (argv[i])
	// 	{
	// 		j = 0;
	// 		while(argv[i][j])
	// 		{
	// 			low_string[i] = argv[i][j];
	// 			if(low_string[i]  >= 'a' && low_string[i] <='z')
	// 				up_string[i] = low_string[i] - 32;
	// 			else
	// 				up_string[i] = low_string[i];
	// 			std::cout << up_string[i];
	// 			j++;
	// 		}
	// 		i++;
	// 	}
	// }
	// else
	// 	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	
	// return (0);
}