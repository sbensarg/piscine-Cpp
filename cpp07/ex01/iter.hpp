/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:53:48 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/06 17:09:32 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

template <class T>
void	iter(T *arr, int length, void (*func)(T const &)) 
{
	for (int i = 0; i < length; i++)
	{
		func(arr[i]);
	}	
}

#endif