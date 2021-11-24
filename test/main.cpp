#include "Sample.class.hpp"
#include <iostream>


int main()
{
	//Sample1 instance('s', 12, 3.46);
	// Sample1 instance(3.14);
	// instance.ft_func();

	//gets and sets
	Sample1 instance;

	instance.setSalary(12);
	std::cout << "instance.getSalary(): " << instance.getSalary() << std::endl;
	return (0);

}

