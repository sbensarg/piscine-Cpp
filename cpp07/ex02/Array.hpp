/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:37:19 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/10 11:57:38 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
template < typename T >

class Array
{
private:
	T *ptr;
	unsigned int s;
public:
	Array(void);
	Array(unsigned int n);
	Array(Array<T> const & src);
	Array<T> & operator=(Array<T> const & rhs);
	T & operator[] (unsigned int index); // indexing operation
	unsigned int size(void);
};

template <typename T>
Array<T>::Array(void)
{
	ptr = new T[0]();
	s = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	ptr = new T[n]();
	s = n;
}

template <typename T>
Array<T>::Array(Array<T> const & src)
{
	*this = src;
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
	s = rhs.s;
	ptr = new T[s];
	for (unsigned int i = 0; i < s; i++)
	{
		ptr[i] = (rhs).ptr[i];
	}
	return (*this);
}

template <typename T>
T & Array<T>::operator[] (unsigned int index)
{
	if (index >= s)
		throw std::exception();
	return ptr[index];
}

template <typename T>
unsigned int Array<T>::size(void)
{
	return (s);
}
#endif
