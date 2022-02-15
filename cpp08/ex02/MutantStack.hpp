/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:38:31 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/15 17:04:00 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <stack>
#include <deque> 
#include <iostream> 

template<typename T, typename Container=std::deque<T> >

class MutantStack : public std::stack<T, Container>
{
public:
	typedef typename Container::iterator iterator;
	MutantStack(void);
	MutantStack(MutantStack<T> const & src);
	~MutantStack();
	MutantStack<T> & operator=(MutantStack<T> const & rhs);
	iterator begin();
	iterator end();
};


template<typename T, typename C>
MutantStack<T, C>::MutantStack()
{
}

template<typename T, typename C>
MutantStack<T, C>::MutantStack(MutantStack<T> const & src)
{
	*this = src;
}

template<typename T, typename C>
MutantStack<T, C>::~MutantStack()
{
	
}

template<typename T, typename C>
MutantStack<T> & MutantStack<T, C>::operator=(MutantStack<T> const & rhs)
{
	(void)rhs;
	return (*this);
}

template<typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::begin() 
{ 
	return this->c.begin();
}

template<typename T, typename C >
typename MutantStack<T, C>::iterator MutantStack<T, C>::end()
{
	return this->c.end();
}

#endif
