/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:48:57 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/12 15:13:22 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
Span::Span(void)
{
}

Span::Span(unsigned int nbr) : N(nbr)
{

}

Span::Span(Span const & src)
{
	*this = src;
}
Span & Span::operator=(Span const & rhs)
{
	(void) rhs;
	return (*this);
}
Span::~Span()
{
}

void Span::addNumber(unsigned int nbr)
{
	if (std::vector<int>::size() < N)
		std::vector<int>::push_back(nbr);
	else
		throw std::exception();
}

int Span::shortestSpan()
{
	if (std::vector<int>::size() == 1 || std::vector<int>::empty())
		throw std::exception();
	int min = INT_MAX;
	std::vector<int>::iterator first = std::vector<int>::begin();
	std::vector<int>::iterator last = std::vector<int>::begin();
	last++;
	while (last != std::vector<int>::end())
	{
		int num = abs(*first - *last);
		if (min > num)
			min = num;
		first++;
		last++;
	}
	return (min);
}

int Span::longestSpan()
{
	if (std::vector<int>::size() == 1 || std::vector<int>::empty())
		throw std::exception();
	int max = 0;
	std::vector<int>::iterator first = std::vector<int>::begin();
	std::vector<int>::iterator last = std::vector<int>::begin();
	last++;
	while (last != std::vector<int>::end())
	{
		int num = abs(*first - *last);
		if (max < num)
			max = num;
		first++;
		last++;
	}
	return (max);
}

unsigned int Span::RandomNumber() 
{
	return (std::rand()%100); 
}

void Span::addRange()
{
	std::srand ( unsigned ( std::time(0)));
	for (unsigned int i = 0; i < this->N; i++)
	{
		addNumber(Span::RandomNumber());
	}
}