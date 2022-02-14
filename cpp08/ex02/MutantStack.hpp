/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:38:31 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/14 17:40:33 by sbensarg         ###   ########.fr       */
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

#endif