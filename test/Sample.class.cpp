#include <iostream>
#include "Sample.class.hpp"


//initialization list

// Sample1::Sample1(char p1, int p2, float p3): var1(p1), var2(p2), var3(p3)
// {
// 	std::cout << "Constructor" << std::endl;
// 	std::cout << "this->var1 " << this->var1 << std::endl;
// 	std::cout << "this->var2 " << this->var2 << std::endl;
// 	std::cout << "this->var3 " << this->var3 << std::endl;
	
// }

Sample1::Sample1(void)
{
	std::cout << "Constructor" << std::endl;
	// this->var = 42;
	// std::cout << "this->var: "  << this->var << std::endl;
	// this->ft_func();
}

// utilisation de const 
// Sample1::Sample1(float const f ): pi( f ), var(12)
// {
// 	std::cout << "Constructor" << std::endl;	
// }

Sample1::~Sample1(void)
{
	std::cout << "Destructor" << std::endl;
	return ;
}

// void Sample1::ft_func(void) const
// {
// 	std::cout << "this->pi = " << this->pi << std::endl;
// 	std::cout << "this->var = " << this->var << std::endl;
// 	return ;
// }

int Sample1::getSalary(void) const
{
	return this->salary;
}

void Sample1::setSalary(int s) {
	this->salary = s;
	return ;
}

