#include <iostream>
#include "Sample.class.hpp"


Sample::Sample(void)
{
	std::cout << "Constructor" << std::endl;
	this->var = 42;
	std::cout << "this->var: "  << this->var << std::endl;
	this->ft_func();
}

Sample::~Sample(void)
{
	std::cout << "Destructor" << std::endl;
	return ;
}

void Sample::ft_func(void)
{
	std::cout << "member function ft_func called" << std::endl;
	return ;
}


