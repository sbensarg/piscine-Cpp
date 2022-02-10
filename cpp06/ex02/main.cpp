/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:25:24 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/09 15:35:16 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
	public: virtual ~Base() 
	{
		std::cout << "Destructor Base class" << std::endl;
	}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	A a;
	Base *bp = dynamic_cast<Base *> (&a);
	return (bp);
}

void identify(Base* p)
{
	A * a = dynamic_cast<A *>(p);
	if (a == NULL)
		std::cout << "Conversion is NOT Ok!" << std::endl;
	else
		std::cout << "this is a derived class {A}" << std::endl;
	B * b = dynamic_cast<B *>(p);
	if (b == NULL)
		std::cout << "Conversion is NOT Ok!" << std::endl;
	else
		std::cout << "this is a derived class {B}" << std::endl;
	C * c =dynamic_cast<C *>(p);
	if (c == NULL)
		std::cout << "Conversion is NOT Ok!" << std::endl;
	else
		std::cout << "this is a derived class {C}" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		std::cout << "this is a derived class {A}" << std::endl;
	}
	catch(const std::bad_cast& bc)
	{
		std::cerr << bc.what() << '\n';
	}
	try
	{
		B & b = dynamic_cast<B &>(p);
		std::cout << "this is a derived class {B}" << std::endl;
	}
	catch(const std::bad_cast& bc)
	{
		std::cerr << bc.what() << '\n';
	}
	try
	{
		C & c =dynamic_cast<C &>(p);
		std::cout << "this is a derived class {C}" << std::endl;
	}
	catch(const std::bad_cast& bc)
	{
		std::cerr << bc.what() << '\n';
	}
}

int main()
{
	A a;

	Base *base;
	base = &a;
	
	//void identify(Base* p)
	identify(base);
	std::cout << "------------------" << std::endl;
	//void identify(Base& p)
	identify (*base);
}