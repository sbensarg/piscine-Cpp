/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:41:09 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/14 19:25:37 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
// template <class T>
// MutantStack<T>::MutantStack()
// {
// }

// template <class T>
// MutantStack<T>::MutantStack(MutantStack<T> const & src)
// {
// 	*this = src;
// }

// template <class T>
// MutantStack<T>::~MutantStack()
// {
	
// }

// template <class T>
// MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & rhs)
// {
// 	(void)rhs;
// 	return (*this);
// }

template <class T>
typename MutantStack<T>::iterator begin() 
{ 
	return this->c.begin(); 
}

template <class T>
typename MutantStack<T>::iterator end()
{
	return this->c.end();
}