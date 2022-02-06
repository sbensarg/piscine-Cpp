/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:37:19 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/06 21:26:33 by sbensarg         ###   ########.fr       */
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
	Array(T arr[], unsigned int n);
	Array(T const & src);
	T & operator=(T const & rhs);
	T const & operator[] (unsigned int index); // indexing operation
	unsigned int size(void);
	//~Array();
};

template <typename T>
Array<T>::Array(void)
{
	ptr = new T[0];
}

template <typename T>
Array<T>::Array(T arr[], unsigned int n)
{
	ptr = new T[n];
	s = n;
	for (unsigned int i = 0; i < s; i++)
	{
		ptr[i] = arr[i];
	}
}

template <typename T>
Array<T>::Array(T const & src)
{
	T *copy = new T[s];
	for (unsigned int i = 0; i < s; i++)
	{
		copy[i] = src[i];
	}
	src = copy;
}

template <typename T>
T & Array<T>::operator=(T const & rhs)
{
	if (this != rhs)
	{
		T *copy = new T[s];
		for (unsigned int i = 0; i < s; i++)
		{
			copy[i] = rhs[i];
		}
	}
	return (*this);
}

template <typename T>
T const & Array<T>::operator[] (unsigned int index)
{
	if (index >= s)
		throw std::exception();
	return *(ptr + index);
}

template <typename T>
unsigned int Array<T>::size(void)
{
	return (s);
}

// template <typename T>

// Array<T>::~Array()
// {
// 	delete [] ptr;
// }

#endif
